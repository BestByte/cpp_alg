#include "plus.h"
#include "pch.h"

int plus(int n1, int n2) {
	return n1 * n2;
}

TEST(TestPlus, TestNamePlus) {
	EXPECT_EQ(2, plus(1, 2));
	EXPECT_TRUE(true);
}