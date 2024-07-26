#pragma once
#include <cstdint>
#include "Bar.h"

namespace BarChart
{

class Chart
{
public:
    Chart();

    void addTick(time_pnt timestamp, double price, uint32_t volume);
    void addBar(const Bar& in);

protected:
    std::vector<Bar> bars;
};

} // namespace BarChart
