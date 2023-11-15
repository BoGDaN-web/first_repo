/*#include <iostream>
#include <cmath>
#define M

using namespace std;

double factorial(double a){
    if(a == 0 || a == 1)
        return 1;
    
    return factorial(a - 1) * a;
}

double calculate(int n, double x){
    double result = 0;
    for(int k = 0; k <= n; k++){
        result += cos(k * M_PI / 4) * pow(x, k) / factorial(k);
    }
    return result;
}


int main(){

    int n;
    double a, b, h, s, y;
    
    cout << "Enter a, b and n: ";
    cin >> a >> b >> n;
    
    h = (b - a) / 10;
    
    for(double x = a; x < b + h / 2; x += h){
        y = exp(x * cos(M_PI / 4)) * cos(x * sin(M_PI / 4));
        s = calculate(n, x);
        cout << x << "      " << y << "     " << s << endl;
    }
    return 0;
}*/

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int num = 5;
//    int array[num];
//
//    for(int n = 0; n < num; n++){
//        cin >> array[n];
//    }
//
//    for(int n = 0; n < num; n++){
//        if(array[n] < 0){
//            for(int j = n + 1; j < num; j++)
//                array[j - 1] = array[j];
//            num--; n--;
//        }
//     //   cout << array[n] << " ";
//    }
//
//    for(int n = 0; n < num; n++){
//        cout << array[n] << " ";
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 5, n;
//    int array[k];
//
//    for(n = 0; n < k; n++){
//        cin >> array[n];
//    }
//
//    for(n = 0; n < k; n++){
//        if(array[n] < 0){
//            for(int j = n + 1; j < k; j++)
//                array[j - 1] = array[j];
//            k--; n--;
//        }
//    }
//
//    for(n = 0; n < k; n++){
//        cout << array[n] << " ";
//    }
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//
//    srand((unsigned) time(NULL));
//
//    int k = 3, s = 0;
//    int a[k][k];
//
//    for(int n = 0; n < k; n++){
//        for(int j = 0; j < k; j++)
//        a[n][j] = rand() % 11 + 10;
//            s += a[n][k - 1 - n];
//    }
//
//    for(int n = 0; n < k; n++){
//        for(int j = 0; j < k; j++)
//            cout << a[n][j] << " ";
//        cout << endl;
//    }
//
//    cout << endl;
//    cout << s << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//
//    srand((unsigned) time(NULL));
//
//    int k = 5, k1, k2, a[k][k], t;
//
//    for(int n = 0; n < k; n++)
//        for(int j = 0; j < k; j++){
//            a[n][j] = rand() % 21 + 10;
//    }
//
//    for(int n = 0; n < k; n++){
//        for(int j = 0; j < k; j++)
//            cout << a[n][j] << " ";
//        cout << endl;
//            }
//
//    cout << "Введите строки которые хотите поменять: ";
//    cin >> k1 >> k2;
//
//    for(int n = 0; n < k; n++)
//        for(int j = 0; j < k; j++){
//             t = a[k1 - 1][j];
//            a[k1 - 1][j] = a[k2 - 1][j];
//            a[k2 - 1][j] = t;
//        }
//
//    for(int n = 0; n < k; n++){
//        for(int j = 0; j < k; j++)
//            cout << a[n][j] << " ";
//        cout << endl;
//            }
//
//
//
//    return 0;
//}
//
//#include <iostream>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//
//    srand((unsigned) time(NULL));
//
//    int k = 4, a[k][k], s = 0;
//
//    for(int n = 0; n < k; n++)
//        for(int j = 0; j < k; j++){
//            a[n][j] = rand() % 21 + 10;
//    }
//
//    for(int n = 0; n < k - 1; n++)
//        for(int j = 0; j < k - 1 - n; j++){
//            s += a[n][j];
//    }
//
//
//        for(int n = 0; n < k; n++){
//            for(int j = 0; j < k; j++)
//                cout << a[n][j] << " ";
//            cout << endl;
//                }
//
//    cout << endl;
//    cout << s << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//
//    srand((unsigned) time(NULL));
//
//    int k = 5, a[k][k], t, n;
//
//    for(n = 0; n < k; n++)
//        for(int j = 0; j < k; j++){
//            a[n][j] = rand() % 21 + 10;
//        }
//
//    for(int n = 0; n < k; n++){
//        for(int j = 0; j < k; j++)
//            cout << a[n][j] << " ";
//        cout << endl;
//            }
//
//    cout << endl;
//
//
//
//    int b[n];
//
//    for(n = 0; n < k; n++){
//        b[n] = a[n][0];
//        for(int j = 0; j < k; j++)
//            if(a[n][j] > b[n])
//                b[n] = a[n][j];
//    }
//
//    for(n = 0; n < k; n++)
//        for(int j = 0; j < k; j++)
//            cout << b[n] <<", "<< b[j] << endl;;
//
//    for(n = 0; n < k - 1; n++)
//        for(int j = n + 1; j < k; j++){
////            cout << b[n] <<", "<< b[j] << endl;
//            if(b[n] > b[j])
//            {
//                t = b[n];
//                b[n] = b[j];
//                b[j] = t;
//
//                for(int m = 0; m < k; m++){
//                    t = a[n][m];
//                    a[n][m] = a[j][m];
//                    a[j][m] = t;
//                }
//            }
//        }
//
//            for(int n = 0; n < k; n++){
//                for(int j = 0; j < k; j++)
//                    cout << a[n][j] << " ";
//                cout << endl;
//                    }
//
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using  namespace std;
//
//int main(){
//
//    int k, t;
//
//    cout << "Enter k: ";
//    cin >> k;
//
//    int a[k];
//
//    for(int n = 0; n < k; n++)
//        cin >> a[n];
//
//    for(int n = 0; n < k; n++)
//        if(abs(a[n]) < abs(a[n + 1])){
//            t = a[n + 1];
//            a[n] = t;
//            a[n + 1] = a[n];
//            n--;
//        }
//
//    for(int n = 0; n < k; n++)
//        cout << a[n] << " ";
//
//    cout << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 10;
//    int a[k], t, n;
//
//    for(n = 0; n < 10; n++){
//        cin >> a[n];
//    }
//
//    for(n = 0; n < k - 1; n++)
//        for(int j = 0; j < k - n - 1; j++){
//        if(a[j] > a[j + 1]){
//            t = a[j];
//            a[j] = a[j + 1];
//            a[j + 1] = t;
//        //    n = 0;
//        }
//    }
//
//    for(n = 0; n < 10; n++)
//        cout << a[n] << " ";
//
//    cout << endl;
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//    const int size = 10;
//    int arr[size];
//       // заполнение массива
//    for (int i = 0; i < size; i++) {
//        cout << "arr[" << i << "] = ";
//        cin >> arr[i];
//    }
//
//    int temp; // временная переменная для обмена элементов местами
//
//    // Сортировка массива пузырьком
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // меняем элементы местами
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    // Вывод отсортированного массива на экран
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 5;
//    int a[k], t, n;
//
//    for(n = 0; n < k; n++){
//        cin >> a[n];
//    }
//
//    for(n = 0; n < k; n++)
//        for(int j = 1; j < k; j++){
//            cout << a[n] << " ";
//        }
//      //  cout << endl;
//
//
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 10, a[k], n, b = 0;
//
//    for(n = 0; n < k; n++)
//        cin >> a[n];
//
//    for(n = 0; n < k; n++){
//        int t = 0;
//        for(int j = 1 + n; j < k; j++)
//            if(a[n] == a[j]){
//                t++;}
//        cout << t << " ";
//        if(t > b) b = t;
//        cout << b << endl;
//    }
//
//    cout << endl;
//    cout << a[b+1] << endl;
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    const int k = 10;
//    int a[k], n, t;
//
//    for(n = 0; n < k; n++)
//        cin >> a[n];
//
//    for(n = 0; n < k - 1; n++)
//        for(int j = 0; j < k - 1 - n; j++)
//            if(abs(a[j]) > abs(a[j + 1])){
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//
//    for(n = 0; n < k; n++)
//        cout << a[n] << " ";
//
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 10, a[k], n, b = 0, p = 0;
//
//    for(n = 0; n < k; n++){
//        cin >> a[k];
//    }
//
//    for(n = 0; n < k - 1; n++){
//        int t = 0, b = 0;
//        for(int j = n + 1; j < k; j++){
//            if(a[n] == a[j])
//                t++;}
//
//        if (t > b){
//            b = t;
//            p = a[n];
//        }
//    }
//
////    for(n = 0; n < k; n++){
////        cout << t << endl;
////    }
//    cout << p << " ";
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 10;
//    int a[k], n, t;
//
//    cout << "Enter t: ";
//    cin >> t;
//
//    for(n = 0; n < k; n++)
//        cin >> a[n];
//
//    for(n = 0; n < k; n++)
//        if(a[n] == t){
//            for(int j = n + 1; j < k; j++)
//                a[j - 1] = a[j];
//            k--; n--;
//        }
//
//    for(n = 0; n < k; n++)
//        cout << a[n] << " ";
//
//    return 0;
//}





//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//
//    int k = 5;
//    int a[k], n, t;
//
//    cout << "Enter t: ";
//    cin >> t;
//
//    for(n = 0; n < k; n++)
//        cin >> a[n];
//
//    for(n = 0; n < k; n++)
//        if(a[n] == t){
//            a[n] = a[n + 1];
//            n--;
//        }
//
//
//    for(n = 0; n < k; n++)
//        cout << a[n] << " ";
//
//    return 0;
//}


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    
    int k = 10;
    int a[k], n, b = 0, s = 0;
    
    
    for(n = 0; n < k; n++)
        cin >> a[n];
    
    for(n = 0; n < k; n++){
        int t = 0;// if(a[n] !- s) create new for, else for(j)
        for(int j = n + 1; j < k; j++)
            if(a[n] == a[j])
                t++;
        
        
        if(t >= b){
            b = t; s = a[n];
        }
    }
        for(n = 0; n < k; n++)
            cout << a[n] << " ";
        
        cout << endl;
        cout << s << endl;
        
        return 0;
    }
    

