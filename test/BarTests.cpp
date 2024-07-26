#include <gtest/gtest.h>
#include "Bar.h"


TEST(BarTest, throwEventsAtRightTime)
{
    BarChart::Bar b(std::chrono::system_clock::now(), BarChart::Bar::Size::MIN_5);
}
