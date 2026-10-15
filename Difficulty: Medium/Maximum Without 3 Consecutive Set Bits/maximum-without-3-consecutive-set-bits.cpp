class Solution {
	public:
	int maxValue(int n) {
		// code here
		
		int no_of_bits = log2(n) + 1;
		
		vector<int>nums(no_of_bits);
		
		int o = n;
		int x = no_of_bits - 1;
		while (o && x >= 0) {
			nums[x] = o%2;
			o /= 2;
			x -= 1;
		}
		
		int county = 0;
		
		// 		for (int i = 0 ; i < nums.size() ; i++) {
		// 			cout << nums[i] << " ";
		// 		}
		
		// 		cout << '\n';
		
		for (int i = 0; i < nums.size() ; i++) {
			
			if (nums[i] == 1) {
				county += 1;
			}
			else if (nums[i] == 0) {
				county = 0;
			}
			
			if (county == 3) {
				nums[i] = 0;
				county = 0;
			}
		}
		
		// 		for (int i = 0 ; i < nums.size() ; i++) {
		// 			cout << nums[i] << " ";
		// 		}
		
		// 		cout << '\n';
		
		int res = 0;
		x = 0;
		
		for (int i = nums.size() - 1; i >= 0 ; i--) {
			res += (nums[i] * (pow(2, x)));
			x += 1;
		}
		
		// 		cout << res;
		return res;
	}
};
