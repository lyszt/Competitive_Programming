#include <iostream>
#include <vector>
using namespace std;


int main(){
    int N, M;
    cin >> N >> M;
    vector<int> natan_items;
    natan_items.reserve(N);

    vector<int> samuel_items;
    samuel_items.reserve(N);

    int count = 0;
    for( int i = 0; i < N; i ++){
        int item;
        cin >> item;
        if (item == 1) {
            natan_items[i] = item;
            count++;
        }

        // 0 if sweetcake, 0 if empty value
    }

    natan_items.resize(count);

    count = 0;
    for( int i = 0; i < N; i ++){
        int item;
        cin >> item;
        if (item == 1) {
            samuel_items[i] = item;
            count++;
        }

        // 0 if sweetcake, 0 if empty value
    }
    samuel_items.resize(count);

    const unsigned long samuel_len = samuel_items.size();
    const unsigned long natan_len = natan_items.size();

    // cout << "S " << samuel_len << "\nN " << natan_len << "\n";
    if (natan_len == M) {
        cout << "Tudo certo.\n";
    }
    else if (natan_len != M && samuel_len == M) {
        cout << "Pegou de Samuel.\n";
    }
    else if (natan_len != M && samuel_len != M){
        cout << "Pegou de um estranho.\n";
    }

    return 0;

}