/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);

}

TEST(TicTacToeBoardTest, outofbounds)
{
	TicTacToeBoard x;
	int result = x.placePiece(5,5);
	ASSERT_EQ(result, Invalid);
}

TEST(TicTacToeBoardTest, place)
{
	TicTacToeBoard x;
	int result = x.placePiece(1,1);
	ASSERT_EQ(result, X);
}

TEST(TicTacToeBoardTest, invalid)
{
	TicTacToeBoard x;
	int result = x.getPiece(2,2);
	ASSERT_EQ(result, Blank);
}
TEST(TicTacToeBoardTest, notover)
{
	TicTacToeBoard x;
	int result = x.getWinner();
	ASSERT_EQ(result, Invalid);
}











