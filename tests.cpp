#include "Tree.h"
#include "Node.h"
#include <vector>
#include <memory>
#include <gtest/gtest.h>

using namespace std;

TEST(Tree, Insert1)
{
    Tree<int>tree3;

    tree3.Insert(1);
    tree3.Insert(2);
    tree3.Insert(3);

    int size = tree3.Size();

    ASSERT_TRUE(size = 3);
}

TEST(Tree, Insert2)
{
    Tree<int> tree3;

    tree3.Insert(4);
    tree3.Insert(5);
    tree3.Insert(6);
    tree3.Insert(7);

    int size = tree3.Size();

    ASSERT_TRUE(size = 4);
}


TEST(Tree, Find1)
{
    Tree<int>tree3;

    tree3.Insert(7);
    tree3.Insert(8);
    tree3.Insert(9);

    ASSERT_NE(tree3.Find(8), nullptr);
}
TEST(Tree, Find2)
{
    Tree<int> tree3;

    tree3.Insert(4);
    tree3.Insert(7);
    tree3.Insert(3);
    tree3.Insert(7);

    ASSERT_FALSE(tree3.Find(8) = nullptr);
}
TEST(Tree, Size1)
{
    Tree<int>tree3;

    tree3.Insert(1);
    tree3.Insert(2);
    tree3.Insert(3);
    tree3.Insert(4);

    ASSERT_EQ(tree3.Size(), 4);
}
TEST(Tree, Size2)
{
    Tree<int>tree3;

    tree3.Insert(333);
    tree3.Insert(666);

    ASSERT_EQ(tree3.Size(), 2);
}

TEST(Tree, Clear1)
{
    Tree<int>tree3;

    tree3.Insert(1);
    tree3.Insert(2);
    tree3.Insert(3);
    tree3.Insert(4);

    tree3.Clear();

    int size = tree3.Size();

    ASSERT_TRUE(size  <= 0);

}
TEST(Tree, Clear2)
{
    Tree<int>tree3;
    tree3.Insert(1);
    tree3.Insert(2);
    tree3.Insert(3);
    tree3.Insert(4);
    tree3.Clear();
    tree3.Insert(1);

    int size = tree3.Size();

    ASSERT_TRUE(size = 1);

}

TEST(Tree, GetAllAscending1)
{
    Tree<int>tree3;

    tree3.Insert(4);
    tree3.Insert(2);
    tree3.Insert(0);

    vector<int> values = {0, 2, 4};

    ASSERT_EQ(tree3.GetAllAsc(), values);
}
TEST(Tree, GetAllAscending2)
{
    Tree<int>tree3;

    tree3.Insert(1);
    tree3.Insert(2);
    tree3.Insert(3);
    tree3.Clear();
    tree3.Insert(4);
    tree3.Insert(5);
    tree3.Insert(6);

    vector<int> values = {4, 5, 6};

    ASSERT_EQ(tree3.GetAllAsc(), values);
}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
