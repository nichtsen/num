#include "lt.h"
using namespace std;

	int Solution::add(int a, int b) {
		return a+b;
	};
	bool Solution::isIsomorphic(string s, string t) {
		return this->single(s,t) && this->single(t,s);
	}
	bool Solution::single(string s, string t) {
		if (s.length() != t.length()) {
			return false;
		}
		int tab[256]{};
		memset(tab, -1, sizeof(tab));
		for (int i=0; i<s.length(); i++) {
			if (tab[s[i]]== -1) {
				tab[s[i]] = t[i];
				continue;
			}
			if(tab[s[i]] == t[i]){
				continue;
			}
			return false;
		}
		return true;
	}

int main() {
	Solution s;
	printf("result: %d", s.isIsomorphic("abc","wab"));
}
