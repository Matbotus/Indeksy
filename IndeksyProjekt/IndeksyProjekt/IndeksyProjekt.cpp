#include <iostream>
#include <curl/curl.h>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

const int x = 50;
string tablica1[x];
string tablica2[x][2];
string tablica3[x];

void tablicuj1()
{
    int a = 1;
    ifstream plik1;
    plik1.open("Tekst.txt", ios::in);

    if (plik1.good() == true)
    {
        cout << "Plik 1 wczytany" << endl;

        while (!plik1.eof())
            plik1 >> tablica1[a++];

        plik1.close();

        for (int i = 0; i < a; i++)
            cout << tablica1[i] << endl;


        //cout << tablica[1] << endl;


    }
    else cout << "Niepowodzenie wczytania pliku 1" << endl;
}
void tablicuj2()
{
    int a = 1, b = 2;

    ifstream plik2;
    plik2.open("Tekst1.txt", ios::in);

    if (plik2.good() == true)
    {
        cout << "\n" "Plik 2 wczytany" << endl;

        while (!plik2.eof())
        {
            getline(plik2, tablica2[a += 2][1]);
            getline(plik2, tablica3[b += 2]);
        }

        plik2.close();

        for (int i = 0; i < b; i++)
        {
            cout << tablica2[i];
            cout << tablica3[i] << endl;
        }



    }
    else cout << "Niepowodzenie wczytania pliku 2" << endl;
}

int main()
{
    tablicuj1();
    tablicuj2();


    return 0;
}


/*
int main(void)
{
    CURL* curl = curl_easy_init();

    if (!curl)
    {
        fprintf(stderr, "Init failed\n"); //w razie błędu
        return EXIT_FAILURE;
    }

   curl_easy_setopt(curl, CURLOPT_URL, "https://extranet.gumed.edu.pl/login.php?redir=;1,"); //pobranie okreslonej strony

   CURLcode result = curl_easy_perform(curl); // wykonanie okreslonych dzialan z pobrana strona

        if (result != CURLE_OK)
            {
            fprintf(stderr, "Download problem: %s\n", curl_easy_strerror(result));
            }

    curl_easy_cleanup(curl);
    return EXIT_SUCCESS;


    return 0;
}
*/
