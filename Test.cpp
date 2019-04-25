#include "LinkedListOfInts.h"
#include "Test.h"
#include <vector>

using namespace std;

void Test::test_01()
{
    cout << "Test 01: After calling addFront once, the IsEmpty function should return false: ";
    LinkedListOfInts test1List;
    test1List.addFront(0);
    showResults(test1List.isEmpty() == false);
}

void Test::test_02()
{
    cout << "Test 02: After calling addBack once, size should return 1: ";
    LinkedListOfInts test2List;
    test2List.addBack(0);
    showResults(test2List.size() == 1);
}

void Test::runTests()
{
    test_01();
}

void Test::showResults(bool showResult)
{
    if (showResult == true)
    {
        cout << "Test has Passed!" << endl;
    }
    else
    {
        cout << "Test has Failed!" << endl;
    }
}
bool Test::testSimilarity(LinkedListOfInts testSimilarity, vector<int> idealValue)
{
    if (testSimilarity.toVector() == idealValue)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
