#include <benchmark/benchmark.h>
#include <iostream>
#include <string>

void BM0(benchmark::State &state)
{
    for (auto _ : state)
    {
        for (int32_t i = 0; i < 1e6; i++)
        {
            printf("hello world!\n");
        }
    }
}

void BM1(benchmark::State &state)
{
    for (auto _ : state)
    {
        for (int32_t i = 0; i < 1e6; i++)
        {
            printf("hello bench!\n");
        }
    }
}

BENCHMARK(BM0)->Unit(benchmark::kMillisecond);
BENCHMARK(BM1)->Unit(benchmark::kMillisecond);