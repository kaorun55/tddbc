#include <gtest/gtest.h>

int add( int val1, int val2 )
{
	return 0;
}

TEST( TestSample, add )
{
	EXPECT_EQ( 3, add( 1, 2 ) );
}
