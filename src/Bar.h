#pragma once
#include <vector>
#include <cstdint>
#include <chrono>
#include "time_funcs.h"

namespace BarChart
{

class Bar;

class BarListener
{
public:
    virtual void OnBarUpdate(Bar* source) {}
    virtual void OnBarNewLow(Bar* source, double oldLow) {}
    virtual void OnBarNewHigh(Bar* source, double oldHigh) {}
    virtual void OnBarNewClose(Bar* source, double oldClose) {}
};

class Bar
{
public:
    enum class Size
    {
        MIN_1,
        MIN_2,
        MIN_5,
        MIN_10,
        MIN_15,
        MIN_30,
        HOUR_1,
        HOUR_4,
        DAY,
        WEEK,
        MONTH,
        YEAR
    };

    Bar(time_pnt startTime, Size size);

    void addTick(double price, uint32_t volume);

protected:
    std::vector<BarListener*> listeners;
    time_pnt startTime;
    Size size;
    double open;
    double high;
    double low;
    double close;
    uint32_t volume;
};

}

