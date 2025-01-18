#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

int trovaCarattere(string s, char c){
	int conta = 0;
	bool trovato = false;
	
	while(conta < s.size() && !trovato){
		if(c == s.at(conta))
			trovato = true;
			
		conta++;
	}
	
	if(!trovato)
		conta = -1;
	
	return conta;
}

int main(){
	
	char c;
	int nChar = 0, nSpazi = 0, nParole=0, i=0, frequenzaMax=0, contaParagrafi=0, contaFrasi=0, contaParoleDiverse=0;
	float mediaFrase=0;
	string parola = "", terminatori = " \t\n.,;:()[]{}-_!\'";
    FILE *file;
    long long int size;
    bool flag=false;

    file = fopen("textFile.txt","r");
    
    fseek (file, 0, SEEK_END);
    size=ftell(file);
    rewind(file);
    
    struct frequenzaParole{
		long long int contaFrequenza = 0;
		string word; 
	}vett[size];
    
    if(file != NULL){
        while((c = fgetc(file)) != EOF){
            putchar(c);
            
            //conta caratteri
            if(trovaCarattere(terminatori, c) == -1){
            	nChar++;
            	parola += c;
            	
			} else {
				nSpazi++;
				
				if(parola != ""){
					vett[i].word = parola;
					
					for(int j=0; j<size; j++){;
						if(vett[i].word==vett[j].word && flag==false){
							vett[i].contaFrequenza += 1;
							flag=true;
						}
						flag = false;
					}
					i++;
				}		 
					
				if(parola != ""){
					nParole++;
					parola = "";
				}
				
				if(c == '\n')
					contaParagrafi++;
					
				if(c == '.')
					contaFrasi++;
			}
        }
        
        if(parola != ""){
			nParole++;
			cout << parola << " ";
			parola = "";
		}
    
	} else {
        perror("ERRORE! Il file non si è aperto correttamente!");
	}
	
	mediaFrase = (float)nParole/contaFrasi;
	
	for(int i=0; i<nParole; i++)
		if(vett[i].contaFrequenza == 1)
			contaParoleDiverse += 1;
			
	for(int i=0; i<nParole; i++){
		if(i == 0)
			frequenzaMax = vett[i].contaFrequenza;
			
		else if(vett[i].contaFrequenza > frequenzaMax)
			frequenzaMax = vett[i].contaFrequenza;
	}
	
	fstream fileHtml;
	fileHtml.open("riultati.html", ios::out);
	
	fileHtml << "<html><head>\n";
	fileHtml << "<style>body {font-family: Arial, sans-serif;margin: 20px;}table {width: 100%;border: 1px solid #ccc;}";
	fileHtml << "th, td {padding: 8px;border: 1px solid #ccc;text-align: center;}th {background-color:color: white;tr:nth-child(odd) {background-color: #f2f2f2;}</style>";
	
	fileHtml << "<body>";
	fileHtml << "<table>";
	fileHtml << "<thead>";
	fileHtml << "<tr>";
	fileHtml << "<th>Lunghezza totale</th>";
	fileHtml << "<th>Numero lettere</th>";
	fileHtml << "<th>Numero parole</th>";
	fileHtml << "<th>Numero spazi</th>";
	fileHtml << "<th>Numero frasi</th>";
	fileHtml << "<th>Numero paragrafi</th>";
	fileHtml << "<th>Numero parole diverse</th>";
	fileHtml << "<th>Lunghezza media frasi</th>";
	fileHtml << "<th>Parola con piu' freqenza</th>";
	fileHtml << "</tr>";
	fileHtml << "</thead>";
	
	fileHtml << "<tbody>";
	fileHtml << "<tr>";
	fileHtml << "<td>" << size << "</td>";
	fileHtml << "<td>" << nChar << "</td>";
	fileHtml << "<td>" << nParole << "</td>";
	fileHtml << "<td>" << nSpazi << "</td>";
	fileHtml << "<td>" << contaParagrafi << "</td>";
	fileHtml << "<td>" << contaFrasi << "</td>";
	fileHtml << "<td>" << contaParoleDiverse << "</td>";
	fileHtml << "<td>" << mediaFrase << "</td>";
	fileHtml << "<td>" << frequenzaMax << "</td>";
	fileHtml << "</tr>";
	fileHtml << "</tbody>";
	
	fileHtml << "</table>\n";
	fileHtml << "</body></html>\n";
	
	fclose(file);
	fileHtml.close();
		
	system("riultati.html");
	
	return 0;
}