#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cwchar>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include <vector>
#include <map>

//Fichiers contient des questions :
//const string domaineInformatique = "";
//const string domainePhysique = "";
//const string domaineMathematique = "";
//const string domaineIndistruel = "";
//const string domaineCulturel = "";

using namespace std;
/////////VILLES/////////////////////////
vector<pair<string, string>> chefchaouenQuestion = {
		{"Quel est le surnom de Chefchaouen ?", "BLEUE"},
		{"Quelle est la signification du nom 'Chefchaouen' ?", "CORNES"},
		{"Quel est le marchE traditionnel de Chefchaouen ?", "OUTA"},
		{"Quelle montagne surplombe Chefchaouen ?", "JBEL"},
		{"Quelle est la couleur dominante des batiments de Chefchaouen ?", "BLEU"},
		{"Quelle est la spEcialitE culinaire de Chefchaouen ?", "RFISSA"},
		{"Quelle est la pEriode la plus favorable pour visiter Chefchaouen en termes de climat ?", "PRINTEMPS"},
		{"Quelle est la langue principale parlEe à Chefchaouen ?", "ARABE"},
		{"Quelle est la principale activitE touristique à Chefchaouen ?", "BALADE"},
};

vector<pair<string, string>> fezQuestion = {
	{"Quelle est la signification du nom 'Fes' ?", "PIOCHE"},
	{"Quel est le cElebre quartier artisanal de Fes ?", "MEDINA"},
	{"Quelle riviere traverse Fes ?", "FES"},
	{"Quelle est la couleur dominante des batiments de Fes ?", "ORANGE"},
	{"Quelle est la spEcialitE culinaire de Fes ?", "PASTILLA"},
	{"Quelle est la pEriode la plus favorable pour visiter Fes en termes de climat ?", "PRINTEMPS"},
	{"Quelle est la langue principale parlEe à Fes ?", "ARABE"}
};

vector<pair<string, string>> rabatQuestion = {
		{"Quelle est la signification du nom 'Rabat' ?", "FORTERESSE"},
		{"Quelle riviere traverse Rabat ?", "BOUREGREG"},
		{"Quelle est la couleur dominante des batiments de Rabat ?", "BLANC"},
		{"Quelle est la spEcialite culinaire de Rabat ?", "COUSCOUS"},
		{"Quelle est la periode la plus favorable pour visiter Rabat en termes de climat ?", "PRINTEMPS"},
		{"Quelle est la langue principale parlee à Rabat ?", "ARABE"}
};

vector<pair<string, string>> casablancaQuestion = {
		{"Quelle rivière traverse Casablanca ?", "BOUREGREG"},
		{"Quelle est la couleur dominante des batiments de Casablanca ?", "BLANC"},
		{"Quelle est la specialite culinaire de Casablanca ?", "HARIRA"},
		{"Quelle est la periode la plus favorable pour visiter Casablanca en termes de climat ?", "PRINTEMPS"},
		{"Quelle est la langue principale parlee à Casablanca ?", "ARABE"}
};

vector<pair<string, string>> laayounQuestion = {
		{"Quelle est la signification du nom 'Laayoune' ?", "SOURCE"},
		{"Quelle rivière traverse Laayoune ?", "OUED LAaYOUNE"},
		{"Quelle est la couleur dominante des batiments de Laayoune ?", "BLANC"},
		{"Quelle est la specialite culinaire de Laayoune ?", "COUSCOUS"},
		{"Quelle est la periode la plus favorable pour visiter Laayoune en termes de climat ?", "HIVER"},
		{"Quelle est la langue principale parlee à Laayoune ?", "ARABE"}
};

vector<pair<string, string>> agadirQuestion = {
		{"Quelle est la couleur dominante des batiments d'Agadir ?", "BLANC"},
		{"Quelle est la specialite culinaire d'Agadir ?", "TAGINE"},
		{"Quelle est la periode la plus favorable pour visiter Agadir en termes de climat ?", "HIVER"},
		{"Quelle est la langue principale parlee à Agadir ?", "ARABE"}
};

vector<pair<string, string>> marrakechQuestion = {
		{"Quelle est la couleur dominante des batiments de Marrakech ?", "ROUGE"},
		{"Quelle est la specialite culinaire de Marrakech ?", "TANJIA"},
		{"Quelle est la periode la plus favorable pour visiter Marrakech en termes de climat ?", "PRINTEMPS"},
		{"Quelle est la langue principale parlee à Marrakech ?", "ARABE"}
};

// /////////DOMAINS/////////////////////
vector<pair<string, string>> questionMelange = {
	{"QUEL EST LE NOM DU PLUS GRAND OCEAN DU MONDE?", "PACIFIQUE"},
	{"QUELLE EST LA CAPITALE DU MAROC?", "RABAT"},
	{"QUELLE EST LA LANGUE OFFICIELLE DU MAROC?", "ARABE"},
	{"QU'EST-CE QUE LE PRINCIPE DE LA LIGNE D'ASSEMBLAGE?", "PRODUCTION"},
	{"QU'EST-CE QUE LA GESTION DE LA CHAINE D'APPROVISIONNEMENT?", "FOURNITURE"},
	{"QUELLE EST LA PLUS GRANDE ILE DU MONDE?", "GROENLAND"},
	{"QU'EST-CE QUE LA SUPERPOSITION QUANTIQUE?", "ETATS"},
	{"QUEL EST LE NOM DU ROBOT QUI A REUSSI LE TEST DE TURING EN 2014?", "EVA"},
	{"QU'EST-CE QUE L'EFFET PHOTOELECTRIQUE?", "LUMIERE"}
};

vector<pair<string, string>> domaineInformatique = {
	{"QU'EST-CE QUE LA rEalitE virtuelle?", "IMMERSION"},
	{"QUEL EST LE LANGAGE DE PROGRAMMATION UTILISE POUR LE DEVELOPPEMENT D'APPLICATIONS iOS?", "SWIFT"},
	{"QU'EST-CE QUE L'INTELLIGENCE ARTIFICIELLE?", "AUTOMATISATION"},
	{"QUEL EST LE NOM DU ROBOT QUI A REUSSI LE TEST DE TURING EN 2014?", "EVA"},
	{"QU'EST-CE QUE LE CRYPTAGE DE DONNEES?", "SECURITE"},
	{"QUEL EST LE LANGAGE DE PROGRAMMATION UTILISE POUR LA CREATION DE JEUX VIDEO?", "C++"},
	{"QU'EST-CE QU'UN ALGORITHME GENETIQUE?", "EVOLUTION"},
	{"QUELLE EST LA THEORIE QUI DIT QUE LA PUISSANCE DE CALCUL DES ORDINATEURS DOUBLE TOUS LES DEUX ANS?", "LOI DE MOORE"},
	{"QU'EST-CE QUE LA PROGRAMMATION FONCTIONNELLE?", "FONCTIONS"},
	{"QUEL EST LE NOM DE LA PREMIERE PROGRAMMATRICE DE L'HISTOIRE?", "LOVELACE"}
};

vector<pair<string, string>> domainePhysique = {
	{"QU'EST-CE QUE LA THEORIE DE LA RELATIVITE RESTREINTE?", "EINSTEIN"},
	{"QUELLE EST LA CONSTANTE QUI DETERMINE LA VITESSE DE LA LUMIERE DANS LE VIDE?", "C"},
	{"QU'EST-CE QUE LE MODELE STANDARD DES PARTICULES ELEMENTAIRES?", "PARTICULES"},
	{"QUEL EST LE NOM DE LA PARTICULE ELEMENTAIRE QUI CONSTITUE LES NEUTRONS ET LES PROTONS?", "QUARK"},
	{"QU'EST-CE QUE L'EFFET PHOTOELECTRIQUE?", "LUMIERE"},
	{"QUEL EST LE NOM DE LA THEORIE QUI DECRIT LES FORCES FONDAMENTALES DE L'UNIVERS EN UNE SEULE THEORIE?", "THEORIE DU TOUT"},
	{"QU'EST-CE QUE LA SUPERPOSITION QUANTIQUE?", "ETATS"},
	{"QUELLE EST LA THEORIE QUI DECRIT LE MECANISME PAR LEQUEL LES OBJETS SE DEPLACENT DANS L'ESPACE?", "MECANIQUE"},
	{"QU'EST-CE QUE LA THEORIE DE LA GRAVITATION UNIVERSELLE?", "NEWTON"},
	{"QUELLE EST LA CONSTANTE QUI DETERMINE LA FORCE D'ATTRACTION ENTRE DEUX OBJETS MASSIFS?", "G"}
};

vector<pair<string, string>> domaineMathematique = {
	{"QU'EST-CE QUE LE THEOREME DE PYTHAGORE?", "TRIANGLE"},
	{"QUEL EST LE NOM DE LA SUITE DE NOMBRES ENTIÈRS POSITIFS DANS L'ORDRE CROISSANT?", "NATURELLE"},
	{"QU'EST-CE QUE LE NOMBRE PI?", "CERCLE"},
	{"QUELLE EST LA CONSTANTE QUI DETERMINE LE TAUX DE CROISSANCE EXPONENTIELLE?", "E"},
	{"QU'EST-CE QU'UNE EQUATION QUADRATIQUE?", "CARRE"},
	{"QUEL EST LE NOM DE LA SUITE DE NOMBRES OBTENUE EN AJOUTANT TOUJOURS LE MÊME NOMBRE?", "ARITHMETIQUE"},
	{"QU'EST-CE QUE LE THEOREME DES VALEURS INTERMEDIAIRES?", "CONTINU"},
	{"QUELLE EST LA SOMME DES ANGLES D'UN TRIANGLE?", "180"},
	{"QU'EST-CE QUE LE THEOREME DE FERMAT?", "CARRE"},
	{"QUEL EST LE NOM DU NOMBRE QUI EST À LA FOIS NEGATIF ET POSITIF?", "NULL"}
};

vector<pair<string, string>> domaineIndistruel = {
	{"QU'EST-CE QUE LE PRINCIPE DE LA LIGNE D'ASSEMBLAGE?", "PRODUCTION"},
	{"QUEL EST LE NOM DU PROCESSUS QUI VISE À OPTIMISER LA PRODUCTION EN REDUISANT LES GASPILLAGES?", "LEAN"},
	{"QU'EST-CE QUE LA GESTION DE LA CHAINE D'APPROVISIONNEMENT?", "FOURNITURE"},
	{"QUELLE EST LA THEORIE QUI PRECONISE L'ELIMINATION DE TOUS LES STOCKS DANS UN SYSTEME DE PRODUCTION?", "JUSTE-A-TEMPS"},
	{"QU'EST-CE QU'UN DIAGRAMME DE GANTT?", "PLANNING"},
	{"QUEL EST LE NOM DU PROCESSUS D'EXAMEN ET D'AMELIORATION CONTINUE DE LA QUALITE DES PRODUITS?", "QUALITE"},
	{"QU'EST-CE QU'UN SYSTEME DE GESTION DE LA QUALITE?", "ISO"},
	{"QUELLE EST LA THEORIE QUI PRÔNE L'UTILISATION DES OUTILS ET DES TECHNIQUES POUR AMELIORER LA PERFORMANCE?", "SIX SIGMA"},
	{"QU'EST-CE QU'UN PROCESSUS DE FABRICATION À FLUX TENDU?", "CONTINU"},
	{"QUEL EST LE NOM DU CONCEPT QUI PRÔNE LA STANDARDISATION ET LA REGULARISATION DES TaCHES?", "TPM"}
};

vector<pair<string, string>> domaineCulturel = {
	{"QUEL EST LE NOM DU PLUS GRAND OCEAN DU MONDE?", "PACIFIQUE"},
	{"QUELLE EST LA CAPITALE DU JAPON?", "TOKYO"},
	{"QUEL EST LE NOM DU PLUS GRAND FLEUVE DU MONDE?", "AMAZONIE"},
	{"QUELLE EST LA PLUS GRANDE ILE DU MONDE?", "GROENLAND"},
	{"QUEL EST LE NOM DU PLUS GRAND DESERT DU MONDE?", "SAHARA"},
	{"QUELLE EST LA HAUTEUR DU MONT EVEREST, EN METRES?", "8848"},
	{"QUEL EST LE NOM DE L'ASTRONAUTE QUI A MARQUE LA PREMIERE PAS SUR LA LUNE?", "ARMSTRONG"},
	{"QUEL EST LE NOM DE L'AUTEUR DE ROMEO ET JULIETTE?", "SHAKESPEARE"},
	{"QUELLE EST LA DATE DE LA CHUTE DU MUR DE BERLIN?", "1989"},
	{"QUEL EST LE NOM DU PREMIER PRESIDENT DES ETATS-UNIS?", "WASHINGTON"}
};

vector<pair<string, string>> cultureMarocaine = {
	{"QUELLE EST LA CAPITALE DU MAROC?", "RABAT"},
	{"QUELLE EST LA LANGUE OFFICIELLE DU MAROC?", "ARABE"},
	{"QUEL EST LE NOM DU DELICIEUX THE À LA MENTHE MAROCAIN?", "ATAY"},
	{"QUEL EST LE NOM DU PLAT MAROCAIN TRADITIONNEL FAIT À BASE DE COUSCOUS?", "COUSCOUS"},
	{"QUELLE EST LA PLUS HAUTE MONTAGNE DU MAROC?", "TOUBKAL"},
	{"QUEL EST LE NOM DE LA CELEBRE VILLE PORTUAIRE DU MAROC, CONNU POUR SON PORT?", "casablancaA"},
	{"QUEL EST LE NOM DU FLEUVE QUI SEPARE RABAT DE SALE?", "BOUREGREG"}
};

enum city {
	fez,
	rabat,
	casablanca,
	marrakech,
	chefchaouen,
	laayoun,
	agadir
};

enum domaine {
	melange,
	informatique,
	physique,
	mathematique,
	indistruel,
	culturelGeneral,
	cultureMarocain
};

void cacheCursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void gotoxy(int x, int y) {
	COORD coordinate;
	coordinate.Y = y;
	coordinate.X = x;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}


class piece
{
public:
	char lettre;
	string color;
	string colorChoice[4] = { "red", "green", "yellow", "blue" };
	vector<char> vCC = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	piece() { generateNextPiece(vCC); }
	piece(vector<char> vC) { generateNextPiece(vC); }
	piece(const char& l, const string& c) : lettre(l), color(c) {}
	void generateNextPiece(vector<char> vC)
	{
		//char lettreChoicee[4] = { 'V', 'E', 'R', 'T' };
		int colorIndex = rand() % 4;
		int lettreIndex = rand() % (vC.size());
		color = colorChoice[colorIndex];
		lettre = vC[lettreIndex];
	}
};

string coloringPiece(piece p) {
	string color;
	if (p.color == "red") color = "\033[31m";
	else if (p.color == "green") color = "\033[32m";
	else if (p.color == "yellow") color = "\033[33m";
	else if (p.color == "blue") color = "\033[34m";
	return color + p.lettre + "\x1b[0m";
}

class Node
{
public:
	int id = 0;
	piece objet;
	Node* next, * prev;
	Node() : next(nullptr), prev(nullptr) { id++; }
	Node(piece p) : objet(p), next(nullptr), prev(nullptr) { id++; }
};

class doubleLinkedList
{
protected:
	Node* head, * tail;
	int size;
public:
	doubleLinkedList() : head(nullptr), tail(nullptr), size(0) {}
	~doubleLinkedList()
	{
		Node* deletedelement, * current;
		current = head;
		while (current != tail && current != nullptr)
		{
			deletedelement = current;
			current = current->next;
			delete deletedelement;
		}
	}
	int getSize() const
	{
		return size;
	}
	Node* getHead() 
	{
		return head;
	}
	Node* getTail() const
	{
		return tail;
	}
	bool isEmpty() const
	{
		return size == 0;
	}

	void insertLeft(piece p) {
		Node* newNode = new Node(p);
		if (size == 0) {
			head = tail = newNode;
			tail->next = head;
			head->prev = tail;
		}
		else {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			head->prev = tail;
			tail->next = head;
		}
		size++;
	}

	void insertRight(piece p) {
		Node* newNode = new Node(p);
		if (size == 0) {
			head = tail = newNode;
			head->prev = tail;
			tail->next = head;
		}
		else {
			newNode->prev = tail;
			tail->next = newNode;
			tail = newNode;
			head->prev = tail;
			tail->next = head;
		}
		size++;
	}
	void tetrisInsertionLeft(piece p)
	{
		Node* newNode = new Node(p);
		if (size == 0) {
			head = tail = newNode;
			tail->next = head;
			head->prev = tail;
		}
		else {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			head->prev = tail;
			tail->next = head;
		}
		size++;
		if (size >= 3 && head != nullptr)
		{
			Node* curr1, * curr2, * curr3;
			curr1 = head;
			curr2 = curr1->next;
			curr3 = curr2->next;
			if ((curr1 != nullptr && curr2 != nullptr && curr3 != nullptr)
				&& ((curr1->objet.color == curr2->objet.color
					&& curr2->objet.color == curr3->objet.color)
					|| (curr1->objet.lettre == curr2->objet.lettre
						&& curr2->objet.lettre == curr3->objet.lettre)))
			{
				removeLeft();
				removeLeft();
				removeLeft();
			}
		}

	}
	void tetrisInsertionRight(piece p)
	{
		Node* newNode = new Node(p);
		if (size == 0) {
			head = tail = newNode;
			head->prev = tail;
			tail->next = head;
		}
		else {
			newNode->prev = tail;
			tail->next = newNode;
			tail = newNode;
			head->prev = tail;
			tail->next = head;
		}
		size++;
		if (size >= 3 && tail != nullptr)
		{
			Node* curr1, * curr2, * curr3;
			curr1 = tail;
			curr2 = curr1->prev;
			curr3 = curr2->prev;
			if ((curr1 != nullptr && curr2 != nullptr && curr3 != nullptr)
				&& (curr1->objet.color == curr2->objet.color
					&& curr2->objet.color == curr3->objet.color)
				|| (curr1->objet.lettre == curr2->objet.lettre
					&& curr2->objet.lettre == curr3->objet.lettre))
			{
				removeRight();
				removeRight();
				removeRight();
			}
		}

	};
	void removeLeft()
	{
		if (!isEmpty())
		{
			Node* temp = head;
			head = head->next;
			head->prev = tail;
			tail->next = head;
			delete temp;
			size--;
		}
		else
		{
			cout << "List is empty."; exit(0);
		}
	}
	void removeRight()
	{
		if (!isEmpty())
		{
			Node* temp = tail;
			tail = tail->prev;
			head->prev = tail;
			tail->next = head;
			delete temp;
			size--;
		}
		else
		{
			cout << "List is empty."; exit(0);
		}
	}
	void print()
	{
		if (!isEmpty())
		{
			Node* temp = head;
			do
			{
				cout << coloringPiece(temp->objet) << " ";
				temp = temp->next;
			} while (temp != head);
			//cout << endl << "\x1b[0m";
		}
	}

	void printSansCouleur()
	{
		if (!isEmpty())
		{
			Node* temp = head;
			do
			{
				cout << temp->objet.lettre << " ";
				temp = temp->next;
			} while (temp != head);
			//cout << endl << "\x1b[0m";
		}
	}

	string extraireMot(int n)
	{
		if (size == n)
		{
			string mot;
			Node* temp = head;
			do {
				mot.push_back(temp->objet.lettre);
				temp = temp->next;
			} while (temp != head);
			return mot;
		}
		return "";
	}

	void switchLettre(Node* l1, Node* l2) {

	}

	char operator[](int i)
	{
		if (size >= i)
		{
			if (i == 0 && head != nullptr)
			{
				return head->objet.lettre;
			}
			else {
				Node* temp = head;
				for (int j = 0; j < i && temp != nullptr; j++)
				{
					temp = temp->next;
				}
				return temp->objet.lettre;
			}
		}
		else {
			cout << "Indice inconnu!!";
			exit(0);
		}
	}

	void shiftLeft(char c)
	{

	}
};


class playerScore
{
private:
	string name;
	int score;
public:
	playerScore() {}
	playerScore(const string& n, const int& s, const string& f) : name(n), score(s) {}
	string toString() {
		return "Nom : " + name + ", score : " + to_string(score);
	}
	void insertIntofile(const string& file)
	{
		ofstream fichier(file, ios::app);
		if (fichier.is_open())
		{
			fichier << toString() << endl;
			fichier.close();
		}
		else {
			std::cerr << "Erreur : Impossible d'ouvrir le fichier." << std::endl;
		}
	}
	void setPlayer()
	{
		cout << "Veuillez entrer Votre nom :"; cin >> name;
	}

	void setScore(int s)
	{
		score = s;
	}

};


class gameBoard
{
private:
	int score;
	int size1;
	int size2;
	int sPosition1;
	int sPosition2;
	bool gameOver;
	bool endGame;
	piece nextPiece;
	int width;
	int height;
public:
	gameBoard() : width(100), height(100), score(0), size1(0), size2(0), sPosition1(0), sPosition2(0), gameOver(false), endGame(false) {}

	void displayScore(const string& f)
	{
		ifstream file(f);
		if (!file.is_open())
			cerr << "Error";
		else
		{
			int i = 12;
			string ligne;
			gotoxy(20, 10);
			cout << "Score table";
			while (getline(file, ligne) && i < 27)
			{
				gotoxy(20, i);
				cout << '|' << ligne << '|' << endl;
				i++;
			}
			file.close();
		}


	}

	vector<char> generateCharacters(string mot, int n)
	{
		char lettreChoice[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
		vector<char> tabOfChar;
		for (const char c : mot)
		{
			tabOfChar.push_back(c);
		}
		for (int i = 0; i < n; i++)
		{
			char c = lettreChoice[rand() % 26];
			tabOfChar.push_back(c);
		}

		return tabOfChar;
	}

	void displayInfo(int x, int y)  const {

		gotoxy(x, y);

		cout << "Score : " << score << "      " << "Piece suivante : " << coloringPiece(nextPiece);
		cout << "                      \033[32mFor help tap 0.\x1b[0m";
		cout << endl << endl;

	}

	void clear() {
		system("cls");
	}

	void displayList(doubleLinkedList& list, int x, int y) {
		gotoxy(x, y);
		list.print();

	}

	void displayPlayerResponse(doubleLinkedList& list, int x, int y) {
		gotoxy(x, y);
		cout << "\033[34m";
		list.printSansCouleur();
		cout << "\x1b[0m";
	}

	void displayTImer(int x, int y) {
		gotoxy(x, y);
		int minutes = 1; // DEfinir le nombre de minutes
		int seconds = 0; // DEfinir le nombre de secondes

		while (minutes >= 0 && seconds >= 0) {
			// Afficher le timer
			gotoxy(102, 4); // Move the cursor to the top-right corner of the console (117, 3)
			std::cout << "Timer: " << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << std::endl;

			// Attendre 1 seconde
			std::this_thread::sleep_for(std::chrono::seconds(1));

			// Mettre à jour les minutes et les secondes
			if (seconds == 0) {
				if (minutes > 0) {
					--minutes;
					seconds = 59;
				}
				else {
					break; // Arrêter le compte à rebours si le temps est EcoulE
				}
			}
			else {
				--seconds;
			}
		}

		//PlaySound(TEXT("timeup.wav"), NULL, SND_SYNC);
		system("cls");
		gotoxy(55, 55);
		std::cout << "Time's up!" << std::endl;
		gotoxy(55, 60);
		gameOverScreen(30, 20);
		exit(0);
	}

	void pauseALL(void) {
		std::cout << "Press any key to continue...";
		std::cin.get();
		std::cin.get();
	}

	void gameOverScreen(int x, int y) {
		gotoxy(x, y);
		std::cout << "Game Over!" << std::endl;
	}

	void youWinScreen() {
		int x = 25, y = 9;
		gotoxy(x, y++);
		std::cout << "'##:::'##::'#######::'##::::'##::::'##:::::'##:'####:'##::: ##:'####:";
		gotoxy(x, y++);
		std::cout << ". ##:'##::'##.... ##: ##:::: ##:::: ##:'##: ##:. ##:: ###:: ##: ####:";
		gotoxy(x, y++);
		std::cout << ":. ####::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ####: ##: ####:";
		gotoxy(x, y++);
		std::cout << "::: ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ## ## ##:: ##::";
		gotoxy(x, y++);
		std::cout << "::: ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ##. ####::..:::";
		gotoxy(x, y++);
		std::cout << "::: ##:::: ##:::: ##: ##:::: ##:::: ##: ##: ##:: ##:: ##:. ###:'####:";
		gotoxy(x, y++);
		std::cout << "::: ##::::. #######::. #######:::::. ###. ###::'####: ##::. ##: ####:";
		gotoxy(x, y++);
		std::cout << ":::..::::::.......::::.......:::::::...::...:::....::..::::..::....::";
		gotoxy(x, y++);
		gotoxy(x, y++); gotoxy(x, y++);
		system("pause"); // Pause the console so the message can be read
		// Clear the console
	}

	void displayMoroccoMap(int x, int y)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
		gotoxy(x, y++);
		std::cout << "                                                            YSOLW                              ";
		gotoxy(x, y++);
		std::cout << "                                                            LWYWNY                             ";
		gotoxy(x, y++);
		std::cout << "                                                           QS   YQSSWWSQSUSOQ Y                ";
		gotoxy(x, y++);
		std::cout << "                                                          YN       YUW      YSSQUY             ";
		gotoxy(x, y++);
		std::cout << "                                                         LY                     QU             ";
		gotoxy(x, y++);
		std::cout << "                                                         LW                      YQ            ";
		gotoxy(x, y++);
		std::cout << "                                                       YNW                        S            ";
		gotoxy(x, y++);
		std::cout << "                                                     SQQY                         S            ";
		gotoxy(x, y++);
		std::cout << "                                                YUSQOU                            SY           ";
		gotoxy(x, y++);
		std::cout << "                                              YNNY                                UY           ";
		gotoxy(x, y++);
		std::cout << "                                             UL                                    U           ";
		gotoxy(x, y++);
		std::cout << "                                           UNW                                      YY         ";
		gotoxy(x, y++);
		std::cout << "                                           OW                                       WY         ";
		gotoxy(x, y++);
		std::cout << "                                         WNY                               QWWWWWWYWY          ";
		gotoxy(x, y++);
		std::cout << "                                        SO                             WWUUU                   ";
		gotoxy(x, y++);
		std::cout << "                                        WN                             YQ                      ";
		gotoxy(x, y++);
		std::cout << "                                        US                             WLW                     ";
		gotoxy(x, y++);
		std::cout << "                                        US                              NY                     ";
		gotoxy(x, y++);
		std::cout << "                                        WQW                        YQUUUY                      ";
		gotoxy(x, y++);
		std::cout << "                                        UU                      USQY                           ";
		gotoxy(x, y++);
		std::cout << "                                        YQ                     WNY                             ";
		gotoxy(x, y++);
		std::cout << "                                       SU             QQUOLLLHON                               ";
		gotoxy(x, y++);
		std::cout << "                                      QW          ULSWYYYY    Y                                ";
		gotoxy(x, y++);
		std::cout << "                                   WUU         YOQU                                            ";
		gotoxy(x, y++);
		std::cout << "                                 UUY          SNY                                              ";
		gotoxy(x, y++);
		std::cout << "                             YYWUY            SQ                                               ";
		gotoxy(x, y++);
		std::cout << "                         UUUUW                SQ                                               ";
		gotoxy(x, y++);
		std::cout << "                       WU                     SQ                                               ";
		gotoxy(x, y++);
		std::cout << "                       U                      SQ                                               ";
		gotoxy(x, y++);
		std::cout << "                      U                       QQ                                               ";
		gotoxy(x, y++);
		std::cout << "                    YWW                       SQ                                               ";
		gotoxy(x, y++);
		std::cout << "                 YWUY                         QQ                                               ";
		gotoxy(x, y++);
		std::cout << "                 U           YQQQQQQQQQQQQQQQQLQ                                               ";
		gotoxy(x, y++);
		std::cout << "                UY           SOYYYYYYYYYYYYYYYY                                                ";
		gotoxy(x, y++);
		std::cout << "               WY            SO                                                                ";
		gotoxy(x, y++);
		std::cout << "               U             SO                                                                ";
		gotoxy(x, y++);
		std::cout << "              YU             SO                                                                ";
		gotoxy(x, y++);
		std::cout << "             UU              SQ                                                                ";
		gotoxy(x, y++);
		std::cout << "           WU                SQ                                                                ";
		gotoxy(x, y++);
		std::cout << "         YJU                 SQ                                                                ";
		gotoxy(x, y++);
		std::cout << "         SU              UQQQOS                                                                ";
		gotoxy(x, y++);
		std::cout << "        UU              QQ                                                                     ";
		gotoxy(x, y++);
		std::cout << "       WQ              YL                                                                      ";
		gotoxy(x, y++);
		std::cout << "       O                J                                                                      ";
		gotoxy(x, y++);
		std::cout << "     OYY                J                                                                      ";
		gotoxy(x, y++);
		std::cout << "    QW                  LY                                                                     ";
		gotoxy(x, y++);
		std::cout << "    NUUUUSUSSSSSSSSSSSSSLU                                                                     ";
		gotoxy(x, y++);
		std::cout << "   YFYY Y         Y YYYYY                                                                      ";
		gotoxy(x, y++);
		std::cout << "   WO                                                                                          ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

	void displayTetris() {
		// Tetris ASCII art
		std::string tetrisArt[] = {
			"\033[32m___________________________________________.___  ____________________",
			"\033[34m\\__    ___/\\_   _____/\\__    ___/\\______   \\   |/   _____/\\_   _____/",
			"\033[32m  |    |    |    __)_   |    |    |       _/   |\\_____  \\  |    __)_",
			"\033[34m  |    |    |        \\  |    |    |    |   \\   |/        \\ |        \\",
			"\033[32m  |____|   /_______  /  |____|    |____|_  /___/_______  //_______  /",
			"\033[34m                   \\/                    \\/            \\/         \\/\x1b[0m"
		};

		// Display Tetris ASCII art line by line using gotoxy function
		int x = 24; // x-coordinate
		int y = 3; // y-coordinate
		for (const auto& line : tetrisArt) {
			gotoxy(x, y++);
			std::cout << line << std::endl;
		}
		//gotoxy(100, 100);
	}

	/*static void displayCity(int x, int y, string city, string color = "\x1b[0m")
	{
		gotoxy(x, y);
		cout << color << city << "\x1b[0m";
	}*/

	void useCity() {
		int i = 9;
		system("cls");
		do {
			gotoxy(70, 2);
			cout << "\033[32mChoisir une ville :";
			displayMoroccoMap(40, 4);
			buttonDeMenu(2, 3);
			cacheCursor();
			gotoxy(105, 9);
			if (i == 9) {
				cout << "\033[32mChefchaouen\x1b[0m" << endl;
				i = 10;
			}
			else cout << "\x1b[0mChefchaouen\x1b[0m";
			gotoxy(98, 11);
			if (i == 11) {
				cout << "\033[32mRabat\x1b[0m" << endl;
			}
			else cout << "\x1b[0mRabat\x1b[0m";
			gotoxy(110, 12);
			if (i == 12)
				cout << "\033[32mFez\x1b[0m" << endl;
			else cout << "\x1b[0mFez\x1b[0m";
			gotoxy(93, 13);
			if (i == 13) {
				cout << "\033[32mcasablancaa\x1b[0m" << endl;
				i = 17;
			}
			else cout << "\x1b[0mcasablancaa\x1b[0m";
			gotoxy(98, 18);
			if (i == 18) {
				cout << "\033[32mMarakkech\x1b[0m" << endl;
				i = 22;
			}
			else cout << "\x1b[0mMarakkech\x1b[0m";
			gotoxy(90, 23);
			if (i == 23) {
				cout << "\033[32mAagadir\x1b[0m" << endl;
				i = 32;
			}
			else cout << "\x1b[0mAagadir\x1b[0m";
			gotoxy(75, 33);
			if (i == 33)
				cout << "\033[32mLaaoun\x1b[0m" << endl;
			else cout << "\x1b[0mLaaoun\x1b[0m";
			char tap = _getch();
			if (tap == 's' || tap == 'S') {
				clear();
				i++;
				if (i > 33) i = 9;
			}

			else if (tap == 13) {
				if (i == 10) run(chefchaouen);
				else if (i == 11) run(rabat);
				else if (i == 12) run(fez);
				else if (i == 17) run(casablanca);
				else if (i == 22) run(marrakech);
				else if (i == 32) run(agadir);
				else if (i == 33) run(laayoun);
			}
		} while (true);
	}

	void Menu() {
		int i = 4;

		do {
			buttonDeMenu(50, 10);
			displayTetris();
			cacheCursor();
			gotoxy(30, 4);
			if (i == 4)
				cout << "\033[32m1 - Start\x1b[0m" << endl;
			else cout << "\x1b[0m1 - Start\x1b[0m";
			gotoxy(30, 5);
			if (i == 5)
				cout << "\033[32m2 - Score\x1b[0m" << endl;
			else cout << "\x1b[0m2 - Score\x1b[0m";
			gotoxy(30, 6);
			if (i == 6)
				cout << "\033[31m3 - Quit\x1b[0m" << endl;
			else cout << "\x1b[0m3 - Quit\x1b[0m";
			gotoxy(28, i);
			cout << "\033[32m>\x1b[0m";
			char tap = _getch();
			if (tap == 's' || tap == 'S') {
				clear();
				i++;
				if (i > 6) i = 4;
			}

			if (tap == 13) {
				if (i == 4)
					useCity();
				else if (i == 5)
					displayScore("./score.txt");
				else if (i == 6)
					endGame = true;
			}
		} while (endGame == false);
	}

	void displayQuestion(const string& mot, int x, int y)
	{
		gotoxy(x, y);
		string colors[4] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m" };
		cout << colors[0] << mot << "\x1b[0m";
	}

	//vector<pair<string, string>> generateQuestionsFromFile(const string& domainFile)
	//{
	//	vector<pair<string, string>> questionResponses;
	//	ifstream file(domainFile);
	//	if (file.is_open())
	//	{
	//		string ligne;
	//
	//		while (getline(file, ligne))
	//		{
	//			// VErifier si la ligne n'est pas vide
	//			if (!ligne.empty()) {
	//				stringstream ss(ligne);
	//				string quest, response;
	//				ss >> quest >> response;
	//				questionResponses.push_back(make_pair(quest, response));
	//			}
	//		}
	//		file.close();
	//	}
	//	else cerr << "Error";
	//
	//	return questionResponses; // Assurez-vous de retourner le vecteur
	//}

	pair<string, string> generateQuestion(domaine d = melange)
	{
		pair<string, string> questionResponse;
		switch (d)
		{
		case informatique:
			questionResponse = domaineInformatique[rand() % domaineInformatique.size()];
			return questionResponse;
		case physique:
			questionResponse = domainePhysique[rand() % domainePhysique.size()];
			return questionResponse;
		case mathematique:
			questionResponse = domaineMathematique[rand() % domaineMathematique.size()];
			return questionResponse;
		case indistruel:
			questionResponse = domaineIndistruel[rand() % domaineIndistruel.size()];
			return questionResponse;
		case culturelGeneral:
			questionResponse = domaineCulturel[rand() % domaineCulturel.size()];
			return questionResponse;
		case cultureMarocain:
			questionResponse = cultureMarocaine[rand() % cultureMarocaine.size()];
			return questionResponse;
		default:
			questionResponse = questionMelange[rand() % questionMelange.size()];
			return questionResponse;
		}
	}

	pair<string, string> generateQuestionVille(city ville)
	{
		pair<string, string> questionResponse;
		switch (ville)
		{
		case chefchaouen:
			questionResponse = chefchaouenQuestion[rand() % chefchaouenQuestion.size()];
			return questionResponse;
		case rabat:
			questionResponse = rabatQuestion[rand() % rabatQuestion.size()];
			return questionResponse;
		case fez:
			questionResponse = fezQuestion[rand() % fezQuestion.size()];
			return questionResponse;
		case casablanca:
			questionResponse = casablancaQuestion[rand() % casablancaQuestion.size()];
			return questionResponse;
		case marrakech:
			questionResponse = marrakechQuestion[rand() % marrakechQuestion.size()];
			return questionResponse;
		case laayoun:
			questionResponse = laayounQuestion[rand() % laayounQuestion.size()];
			return questionResponse;
		case agadir:
			questionResponse = agadirQuestion[rand() % agadirQuestion.size()];
			return questionResponse;
		default:
			questionResponse = questionMelange[rand() % questionMelange.size()];
			return questionResponse;
		}
	}

	string extraireMot(doubleLinkedList& list, int n) 
	{
		if (list.getSize() == n)
		{
			string mot;
			Node* temp = list.getHead();
			do {
				mot.push_back(temp->objet.lettre);
				temp = temp->next;
			} while (temp != list.getHead());
			return mot;
		}
		return "";
	}

	void tableD_aide()
	{
		gotoxy(75, 4);
		cout << "\033[32mLes actions : \x1b[0m";
		gotoxy(75, 5);
		cout << "\033[31m4 pt --> supprimer 1er lettre. (cliquer sur 1)\x1b[0m";
		gotoxy(75, 6);
		cout << "\033[31m4 pt --> supprimer dernier lettre. (cliquer sur 2)\x1b[0m";
		gotoxy(75, 7);
		cout << "\033[31m5 pt --> afficher le 1er lettre. (cliquer sur 3)\x1b[0m";
		gotoxy(75, 8);
		cout << "\033[31m3 pt --> supprimer tout. (cliquer sur 4)\x1b[0m";
		gotoxy(75, 9);
		cout << "\033[31m2 pt --> nombre de caractere. (cliquer sur 5)\x1b[0m";
	}

	void verifieReponse(doubleLinkedList& list, int x, int y, string response, int& score, int payment) {
		if (/*score >= 5*/ /*&&*/ payment == 5) {
			gotoxy(x, y);
			for (int i = 0; i < response.length(); i++)
			{
				cout << "=" << " ";
			}
		}
		//else {
		//	gotoxy(x, y);
		//	//cout << "Solde insuffisant"; Sleep(800);
		//}
		gotoxy(x, y);
		for (int i = 0; i < list.getSize() && i < response.length(); i++)
		{
			if (list[i] == response.at(i))
				cout << "\033[32m=\x1b[0m" << " ";
			else cout << "\033[31m=\x1b[0m" << " ";
		}
	}

	void hover(doubleLinkedList& list, int x, int y)
	{
		gotoxy(x, y);
		for (int i = 0; i < list.getSize(); i++)
		{
			cout << "^" << " ";
		}
	}

	void buttonDeMenu(int x, int y){
		gotoxy(x, y);
		cout << "\033[32m Help : \x1b[0m";
		gotoxy(x, y + 1);
		cout << "\033[32m S : pour naviguer \x1b[0m";
		gotoxy(x, y + 2);
		cout << "\033[32m Entrer : pour choisir \x1b[0m";
	}
	
	void buttonPourJouer(){
		gotoxy(50, 15);
		cout << "\033[32m Boutton de jeux : \x1b[0m";
		gotoxy(50, 16);
		cout << "\033[32m Q et E pour inserer dans la 1er list \x1b[0m";
		gotoxy(50, 17);
		cout << "\033[32m A et D pour inserer dans la 2eme list \x1b[0m";
	}

	void gestionDePoints(doubleLinkedList& list, int& score, const string& mot)
	{
		char action;
		tableD_aide();
				action = _getch();
				if (action == '1' || action == '2')
				{
					if (!list.isEmpty() && score >= 4)
					{
						if (action == '1') list.removeLeft();
						if (action == '2') list.removeRight();
						score -= 4;
						Sleep(200);
						return;
					}
					else {
						cout << "Score insuffisante / liste vide";
						Sleep(400);
					}
				}
				else if (action == '3' && score >= 5) {
					gotoxy(90, 10);
					cout << "1er LETTRE : " << mot.at(0);
					score -= 5;
					Sleep(1000);
					return;
				}
				else if (action == '5' && score >= 2)
				{
					gotoxy(90, 10);
					cout << "Nombre de lettre : " << mot.length();
					score -= 2;
					Sleep(1000);
					return;
				}
				else {
					gotoxy(90, 10);
					cout << "List vide inserer pour effection des actions ou point insiffusant";
					Sleep(600);
					return;
				}
		}

	void displaySizeLimit(int x, int y, int size, int sizeLimit)
	{
		gotoxy(x, y);
		cout << "[ " << size << " / " << sizeLimit << " ]\x1b[0m";
	}

	void run(city ville)
	{
			clear();
			playerScore player;
			gotoxy(50, 2);
			player.setPlayer();
			srand(time(0));
		do
		{
			clear();			
			doubleLinkedList principale_list;
			doubleLinkedList second_list;
			pair<string, string> questionAndReponse;
			questionAndReponse = generateQuestionVille(ville);
			vector<char> listOfCharactersFromAnswer = generateCharacters(questionAndReponse.second, 0);
			bool win = false;
			sPosition1 = sPosition2 = 0;
			size1 = size2 = 0;
			
			while (second_list.getSize() <= 30 && principale_list.getSize() < questionAndReponse.second.length() + 5)
			{
				
				piece p(listOfCharactersFromAnswer);
				nextPiece = p;
				cacheCursor();
				clear();
				buttonPourJouer();
				displayInfo(40, 4);
				displaySizeLimit(10, 6, size1, questionAndReponse.second.length() + 5);
				displaySizeLimit(10, 9, size2, 30);
				displayPlayerResponse(principale_list, 55 + sPosition1, 6);
				verifieReponse(principale_list, 55 + sPosition1, 7, questionAndReponse.second, score, 5);
				displayList(second_list, 55 + sPosition2, 9);
				hover(second_list, 55 + sPosition2, 10);
				displayQuestion(questionAndReponse.first, 10, 2);
				char choice;
				do
				{
					
					//Sleep(500);
					choice = _getch();
					if (choice == 'q' || choice == 'Q')
					{
						principale_list.insertLeft(p);
						size1++;
						if (size1 > principale_list.getSize())
						{
							size1 = principale_list.getSize();
							score += 10;
						}
						if(sPosition1 > -size1)
							sPosition1--;
						break;
					}
					else if (choice == 'e' || choice == 'E')
					{
						principale_list.insertRight(p);
						size1++;

						if (size1 > principale_list.getSize())
						{
							size1 = principale_list.getSize();
							score += 10;
						}
						
						break;
					}
					else if (choice == 'a' || choice == 'A')
					{
						second_list.tetrisInsertionLeft(p);
						size2++;
						if (size2 > second_list.getSize())
						{
							size2 = second_list.getSize();
							score += 1;
						}
						if (sPosition2 > -size2)
							sPosition2--;
						break;
					}
					else if (choice == 'd' || choice == 'D')
					{
						second_list.tetrisInsertionRight(p);
						size2++;

						if (size2 > second_list.getSize())
						{
							size2 = second_list.getSize();
							score += 1;
						}
						break;
					}
					else if (choice == '0')
					{
						gestionDePoints(principale_list, score, questionAndReponse.second);
						break;
					}
					else
					{
						continue;
					}
				
				} while ((choice != 'a' && choice != 'd' && choice != 's' && choice != 'w'));

			
				//displayTImer(80, 3);
				if (principale_list.extraireMot(questionAndReponse.second.length()) == questionAndReponse.second)
				{
					
					score += 10;
					Sleep(800);
					clear();
					youWinScreen();
					break;
				}
			}
			player.insertIntofile("./score.txt");
		}while (true);
		
		gameOverScreen(30, 20);

		player.setScore(score);
		
	}
};

int main()
{	
	gameBoard g1;
	g1.Menu();
	//gameBoard::useCity(30, 5);
}