#include <ctest.h>
#include <calc.h>

CTEST(equation_suite, tworoots)
{
	//Given
	const double a = 4;
	const double b = 14.62;
	const double c = 12.3;

	//When
	double x = 0;
	double x2 = 0;
	const int rv = calc(a, b, c, &x, &x2);

	//Then
	const double expected_x1 = -1.31295529834;
	const double expected_x2 = -2.342044701653;
	const int two = 2;
	
	ASSERT_DBL_NEAR(expected_x1, x);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(two, rv);
}

CTEST(equation_suite, oneroot)
{
	//Given
	const double a = -2;
	const double b = 7;
	const double c = -6.125;

	//When
	double x = 0;
	double x2 = 0;
	const int rv = calc(a, b, c, &x, &x2);
	const int one = 1;

	//Then
	const double expected_x1 = 1.75;
	ASSERT_EQUAL(one, rv);
	ASSERT_DBL_NEAR(expected_x1, x);

}

CTEST(equation_suite, oneroot2)
{
	//Given
	const double a = 0;
	const double b = 1;
	const double c = -8;

	//When
	double x = 0;
	double x2 = 0;
	const int rv = calc(a, b, c, &x, &x2);
	const int one = 1;
	
	//Then
	const double expected_x1 = 8;

	ASSERT_DBL_NEAR(expected_x1, x);
	ASSERT_EQUAL(one, rv);
}

CTEST(equation_suite, norealroots)
{
	//Given
	const double a = 90.8;
	const double b = 89.7;
	const double c = 78.6;

	//When
	double x = 0;
	double x2 = 0;
	const int rv = calc(a, b, c, &x, &x2);
	const int no = 0;
	
	//Then
	ASSERT_EQUAL(no, rv);
}

CTEST(equation_suite, invin)
{
	//Given
	const double a = 0;
	const double b = 0;
	const double c = 1.33;

	//When
	double x = 0;
	double x2 = 0;
	const int rv = calc(a, b, c, &x, &x2);
	const int in = -1;
	
	//Then
	ASSERT_EQUAL(in, rv);
}
