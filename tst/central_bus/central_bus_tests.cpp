#include <gtest/gtest.h>
#include <central_bus/central_bus.hpp>

TEST(CentralBusTests, testCreation)
{
	gc::CentralBus* cb;
	ASSERT_NO_THROW(cb = new gc::CentralBus);
}