#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct {
	char* first_name;
	char* last_name;
} Author;


typedef struct {
	Author* authors;
	int count;
	int capacity;
} AuthorList;


typedef struct {
	char* title;
	int year;
	AuthorList authors;
} Book;

void init_author_list(AuthorList* list) {
	list->count = 0;
	list->capacity = 2;
	list->authors = (Author*)malloc(list->capacity * sizeof(Author));
}

void add_author(AuthorList* list, const char* first_name, const char* last_name) {

	if (list->count >= list->capacity) {
		list->capacity *= 2;
		list->authors = (Author*)realloc(list->authors,
			list->capacity * sizeof(int));
	}
	list->count++;
}

void free_author_list(AuthorList* list) {

	free(list->authors);
	list->authors = NULL;
	list->count = 0;
	list->capacity = 0;
}


Book* create_books(int n) {
	Book* books = (Book*)malloc(n * sizeof(Book));
	for (int i = 0; i < n; i++) {

	}
	return books;
}


Book* find_book_with_most_authors(Book* books, int n) {
	if (n <= 0) return NULL;

	Book* best = &books[0];
	int max_authors = books[0].authors.count;

	for (int i = 1; i < n; i++) {
		if (books[i].authors.count > max_authors) {
			best = &books[i];
			max_authors = books[i].authors.count;
		}
	}
	return best;
}


void print_book(const Book* book) {
	printf("Книга: %s\n", book->title);
	printf("Год издания: %d\n", book->year);
	printf("Количество авторов: %d\n", book->authors.count);

	if (book->authors.count > 0) {
		printf("Авторы:\n");
		for (int i = 0; i < book->authors.count; i++) {
			printf("  - %s %s\n",
				book->authors.authors[i].first_name,
				book->authors.authors[i].last_name);
		}
	}
	else {
		printf("Авторы не указаны\n");
	}
}


void free_books(Book* books, int n) {
	for (int i = 0; i < n; i++) {

		free_author_list(&books[i].authors);
	}
	free(books);
}

void clear_input_buffer() {
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
	if (str != NULL) {
		str[strcspn(str, "\n")] = '\0';
	}
}


int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 0;
	printf("Введите количество книг: ");
	scanf_s("%d", &n);
	clear_input_buffer();


	Book* books = create_books(n);


	for (int i = 0; i < n; i++) {
		printf("\nКнига %d:\n", i + 1);

		printf("Название: ");


		printf("Год издания: ");
		scanf_s("%d", &books[i].year);
		clear_input_buffer();

		int author_count = 0;
		printf("Количество авторов: ");
		scanf_s("%d", &author_count);
		clear_input_buffer();

		for (int j = 0; j < author_count; j++) {
			printf("  Автор %d:\n", j + 1);

			printf("    Имя: ");
			char first_name[100];
			fgets(first_name, sizeof(first_name), stdin);
			clear_last_linebreak(first_name);

			printf("    Фамилия: ");
			char last_name[100];
			fgets(last_name, sizeof(last_name), stdin);
			clear_last_linebreak(last_name);

			add_author(&books[i].authors, first_name, last_name);
		}
	}

	printf("\nВсе книги:\n");
	for (int i = 0; i < n; i++) {
		printf("\n%d. ", i + 1);
		print_book(&books[i]);
	}


	Book* best = find_book_with_most_authors(books, n);
	if (best) {
		printf("\nКнига с наибольшим количеством авторов:\n");
		print_book(best);
	}

	printf("\nДобавить нового автора к книге? (1 - да, 0 - нет): ");
	int new_author = 0;
	scanf_s("%d", &new_author);
	clear_input_buffer();

	if (new_author == 1 && n > 0) {
		printf("Выберите книгу (1-%d): ", n);
		int book_num = 0;
		scanf_s("%d", &book_num);
		clear_input_buffer();

		if (book_num >= 1 && book_num <= n) {
			printf("Имя нового автора: ");
			char new_first_name[100];
			fgets(new_first_name, sizeof(new_first_name), stdin);
			clear_last_linebreak(new_first_name);

			printf("Фамилия нового автора: ");
			char new_last_name[100];
			fgets(new_last_name, sizeof(new_last_name), stdin);
			clear_last_linebreak(new_last_name);

			add_author(&books[book_num - 1].authors, new_first_name, new_last_name);

			printf("\nОбновленная информация о книге:\n");
			print_book(&books[book_num - 1]);
		}
	}

	free_books(books, n);

	return 0;
}