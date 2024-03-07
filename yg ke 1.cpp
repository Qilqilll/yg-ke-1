#include <iostream>
using namespace std;

int main()
{
    float nMtk, nFisika, nRata;
    string status;

    cout << "masukan nilai mtk ";
    cin >> nMtk;
    cout << "masukan nilai fisika ";
    cin >> nFisika;

    nRata = (nFisika + nMtk) / 2;

    if (nRata >= 60) {
        status = "lulus jalur rerata";
    }
    else if (nMtk >= 70) {
        status = "lulus jalur mtk";
    }
    else {
        status = "tidak lulus";
    }

    cout << "statusnya adalah" << status << endl;
    system("pause");

}