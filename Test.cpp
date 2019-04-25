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

void Test::test_09()
{
    cout << "Test_09: calling addBack more than once, size should return the correct value: ";
    LinkedListOfInts test9List;
    test9List.addBack(0);
    test9List.addBack(2);
    test9List.addBack(4);
    test9List.addBack(6);
    test9List.addBack(8);
    showResults(test9List.size() == 5);
}

void Test::test_10()
{
    cout << "Test_10: after a series of addBack, addFront, removeBack, and removeFront, size should return the correct value: ";
    LinkedListOfInts test10List;
    test10List.addBack(0);
    test10List.addFront(7);
    test10List.addBack(1);
    test10List.addBack(10);
    test10List.addFront(5);
    test10List.addFront(8);
    test10List.addBack(9);
    test10List.addFront(11);
    test10List.removeBack();
    test10List.removeFront();
    test10List.removeFront();
    showResults(test10List.size() == 5);
}

void Test::test_11()
{
    cout << "Test_11: calling the search function returns false if the list is empty: ";
    LinkedListOfInts test11List;
    showResults(test11List.search(4) == false);
}

void Test::test_12()
{
    cout << "Test_12: calling a series of addBack and removeBack yields a correct size value: ";
    LinkedListOfInts test12List;
    test12List.addBack(6);
    test12List.addBack(7);
    test12List.addBack(4);
    test12List.addBack(8);
    test12List.addBack(10);
    test12List.addBack(12);
    test12List.addBack(15);
    test12List.removeBack();
    test12List.removeBack();
    test12List.removeBack();
    showResults(test12List.size() == 4);
}

void Test::test_13()
{
    cout << "Test_13: calling a series of addFront and removeFront yields a correct size value: ";
    LinkedListOfInts test13List;
    test13List.addFront(4);
    test13List.addFront(0);
    test13List.addFront(2);
    test13List.addFront(7);
    test13List.addFront(3);
    test13List.addFront(1);
    test13List.removeFront();
    test13List.removeFront();
    test13List.removeFront();
    showResults(test13List.size() == 3);
}

void Test::test_14()
{
    cout << "Test_14: if the same value is added to the list, search returns true: ";
    LinkedListOfInts test14List;
    test14List.addBack(2);
    test14List.addFront(1);
    test14List.addBack(2);
    test14List.addFront(2);
    test14List.addBack(2);
    test14List.addBack(1);
    showResults(test14List.search(2));
}

void Test::test_15()
{
    cout << "Test_15: if a specific value has not been added to the list, search returns false: ";
    LinkedListOfInts test15List;
    test15List.addBack(2);
    test15List.addFront(4);
    test15List.addFront(6);
    test15List.addBack(8);
    showResults(test15List.search(10) == false);
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
    test_09();
    test_10();
    test_11();
    test_12();
    test_13();
    test_14();
    test_15();
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
