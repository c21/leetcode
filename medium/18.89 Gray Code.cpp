/*
The gray code is a binary numeral system where two successive values differ in only one bit.

Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:

00 - 0
01 - 1
11 - 3
10 - 2
Note:
For a given n, a gray code sequence is not uniquely defined.

For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.

For now, the judge is able to judge based on one instance of gray code sequence. Sorry about that.
*/

class Solution 
{
	public:

    	vector<int> grayCode(int n) 
	{
		vector<int> result = vector<int>();
		result.push_back(0);

		for(int i = 0; i < n; i++)
		{
			int x = pow(2, i);
			int size = result.size();
			for(j = size-1; j >= 0; j--)
			{
				result.push_back(result[j]*x);	
			}
		}		
        	return result;

    	}

};

/*
  格雷码计算n位，可以看作计算n-1位，然后翻折过来，最大位前面n-1位的为0，后面的为1.
*/
