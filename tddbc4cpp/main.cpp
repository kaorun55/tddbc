#include <gtest/gtest.h>

int add( int val1, int val2 )
{
	return 3;
}

TEST( TestSample, add )
{
	EXPECT_EQ( 3, add( 1, 2 ) );
	EXPECT_EQ( 7, add( 3, 4 ) );
}
