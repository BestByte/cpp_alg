#include "plus.h"
#include "pch.h"
#include<iostream>
using namespace std;
int plus1(int n1, int n2) {
	return n1 * n2;
}

TEST(TestPlus, TestNamePlus) {
	EXPECT_EQ(2, plus1(1, 2));
	cout << "Ë³Ðò±í³õÊ¼»¯..." << endl;
	EXPECT_TRUE(true);
}