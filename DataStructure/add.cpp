#include "add.h"
#include "pch.h"

int add(int n1, int n2) {
	return n1 + n2;
}

TEST(TestAdd, TestNameAdd) {
	EXPECT_EQ(3, add(1,2));
	EXPECT_TRUE(true);
}