#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverse_s(string s) {
    stack<string> st;
    for (int i = 0; i < s.length(); i++) {
        string word = "";
        while (s[i] != ' ' && i < s.length()) {
            word = word + s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
}

int main() {
    string s = "hello, how are you";
    reverse_s(s);

    return 0;
}

