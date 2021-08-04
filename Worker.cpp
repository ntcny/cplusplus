#include "Worker.hpp"

Worker::Worker()
{
    for (auto i = 0; i < 2; ++i)
        i;
}

int Worker::Summ(int a, int b)
{
    return a+b;
}