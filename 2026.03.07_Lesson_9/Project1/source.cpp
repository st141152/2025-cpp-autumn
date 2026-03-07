#include<iostream>
#include<cstdio>
class ArrayList {
public:
    int size;
    int capacity;
    double* data;

    ArrayList()
    {
        size = 0;
        capacity = 4;
        data = new double[capacity] {0};
    }

    ~ArrayList()
    {
        delete[] data;
    }

    int getSize()
    {
        return size;
    }

    void resize(int newCapacity)
    {
        double* newData = new double[newCapacity] {0};
        for (int i = 0; i < size; ++i)
        {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }
    void add(double value)
    {
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        data[size] = value;
        ++size;
    }

    int get(int index)
    {
        if (0 <= index && index < size)
        {
            return data[index];
        }
        return -1;
    }

    void set(int index, int value)
    {
        if (0 <= index && index < size)
        {
            data[index] = value;
        }
        if (index == size)
        {
            add(value);
        }
    }
    void print()
    {
        std::cout << "[" << size << "/" << capacity << "]{";
        for (int i = 0; i < size; ++i)
        {
            std::cout << data[i] << "";
        }
        std::cout << "}" << std::endl;
    }
    void remove(int index)
    {
        if (index < 0 || index >= size)
        {
            return;
        }
        for (int i = index; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }
        --size;
    }
};
int main() 
{
    ArrayList list;
    list.add(0.5);
    list.add(1.5);
    list.add(2.5);
std::cout << list.get(2) << std::endl;
    list.set(1, 3.5);
    list.remove(0);
    std::cout << list.getSize() << std::endl;
    list.print();

    return 0;
}
