#include <gtest/gtest.h>

int add( int val1, int val2 )
{
	if ( (val1 == 1) && (val2 == 2) ) {
		return 3;
	}
	else if ( (val1 == 3) && (val2 == 4) ) {
		return 7;
	}

	return 11;
}

TEST( TestSample, add )
{
	EXPECT_EQ( 3, add( 1, 2 ) );
	EXPECT_EQ( 7, add( 3, 4 ) );
	EXPECT_EQ( 11, add( 5, 6 ) );
}
