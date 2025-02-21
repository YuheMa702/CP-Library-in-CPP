// tests/data-structures/linked-lists/singly-linked-lists-tests.cpp
#include <gtest/gtest.h>
#include "data-structures/linked-lists/singly-linked-lists.hpp"

using namespace CP;

// Test case for push_front()
TEST(SLinkedListTest, PushFront) {
    SLinkedList list;
    list.push_front(10);
    list.push_front(20);
    EXPECT_EQ(list.peek_front(), 20);   // 20 should be the first element
    EXPECT_EQ(list.length(), 2);        
}

// Test case for push_back()
TEST(SLinkedListTest, PushBack) {
    SLinkedList list;
    list.push_back(5);
    list.push_back(15);
    EXPECT_EQ(list.peek_front(), 5);    // 5 should be the first element
    EXPECT_EQ(list.length(), 2);
}

// Test case for pop_front()
TEST(SLinkedListTest, PopFront) {
    SLinkedList list;
    list.push_front(30);
    list.push_front(40);
    list.pop_front();
    EXPECT_EQ(list.peek_front(), 30);   // 40 gets popped, only 30 left
}

// Test case for checking if list is empty
TEST(SLinkedListTest, IsEmpty) {
    SLinkedList list;
    EXPECT_TRUE(list.is_empty());
    list.push_front(5);
    EXPECT_FALSE(list.is_empty());
}

// Test case for printing
TEST(SLinkedListTest, Print) {
    SLinkedList list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    testing::internal::CaptureStdout();
    list.print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "30 -> 20 -> 10 -> dummy\n");
}

// Main function for running all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
