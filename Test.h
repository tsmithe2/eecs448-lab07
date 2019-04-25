#ifndef  TEST_H
#define TEST_H
#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

using namespace std;

class Test
{
    public:
    void runTests();
    void showResults(bool showResult);
    bool testSimilarity(LinkedListOfInts testSimilarity, vector<int> idealValue);

    void test_01();
    void test_02();
};
#endif 