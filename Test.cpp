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

void Test::test_03()
{
    cout << "Test_03: If the list is empty, then size should return 0: ";
    LinkedListOfInts test3List;
    showResults(test3List.size() == 0);
}
void Test::test_04()
{
    cout << "Test_04: If the list is empty, then IsEmpty should return true: ";
    LinkedListOfInts test4List;
    showResults(test4List.isEmpty());
}
void Test::test_05()
{
    cout << "Test_05: After calling addBack and addFront once, size should return the correct value: ";
    LinkedListOfInts test5List;
    test5List.addBack(4);
    test5List.addFront(2);
    showResults(test5List.size() == 2);
}

void Test::test_06()
{
    cout << "Test_06: After calling addfront a few times, size should return the correct value: ";
    LinkedListOfInts test6List;
    test6List.addFront(8);
    test6List.addFront(4);
    test6List.addFront(2);
    test6List.addFront(1);
    test6List.addFront(0);
    showResults(test6List.size == 5);
}

void Test::test_07()
{
    cout << "Test_07: Calling addBack once should cause IsEmpty to return false: ";
    LinkedListOfInts test7List;
    test7List.addBack(1);
    showResults(test7List.isEmpty() == false);
}

void Test::test_08()
{
    cout << "Test_08: calling addFront once should cause size to return 1: ";
    LinkedListOfInts test8List;
    test8List.addFront(1);
    showResults(test8List.size() == 1);
}

void Test::runTests()
{
    test_01();
    test_02();
    test_03();
    test_04();
    test_05();
    test_06();
    test_07();
    test_08();
    
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
