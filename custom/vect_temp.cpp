#include <iostream>
#include <memory>

template <typename T>
class MyVector
{
private:
    std::unique_ptr<T[]> data;
    size_t size_;
    size_t capacity;

    void resize(size_t new_capacity)
    {
        auto new_data = std::make_unique<T[]>(new_capacity);
        for (size_t i = 0; i < size_; ++i)
        {
            new_data[i] = std::move(data[i]);
        }

        data = std::move(new_data);
        capacity = new_capacity;
    }

public:
    MyVector() : data(nullptr), size_(0), capacity(0) {}

    size_t getSize() const
    {
        return size_;
    }

    void pushBack(const T &value)
    {
        if (size_ == capacity)
        {
            size_t new_capacity = (capacity == 0) ? 1 : 2 * capacity;
            resize(new_capacity);
        }
        data[size_] = value;
        ++size_;
    }

    T &operator[](size_t index)
    {
        return data[index];
    }
};

int main()
{
    MyVector<int> v;
    std::cout << v.getSize() << std::endl;
    v.pushBack(10);
    v.pushBack(1);
    v.pushBack(30);
    for (int i = 0; i < v.getSize(); ++i)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}