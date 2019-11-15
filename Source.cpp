#include<iostream>
#include<ctime>
using namespace std;
int main() {
	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;
	cout << "DDDPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP)DD" << endl;
	cout << "DDD····DD·)Db)DDDD··QDb··DDDDb·)Db··)DDDD·pDb·pDb···QDDDbp)DD·DDp)Db·pDDDp···)DD" << endl;
	cout << "DDD····DDDDDP)DDDb·pDQDb·QDC)Db)Db··)DDDb·)Db·)Db···)DP·DD)DD·DDDDDb)DC·)DP··)DD" << endl;
	cout << "DDD···)DD·)Db)DDDD)DPPDDCDDDDP·)DDDD)DDDDPDDP·DDP···DDDDPP)DD·DD·DDb·SDDDP···)DD" << endl;
	cout << "DDD·······················································p··················)DD" << endl;
	cout << "DDD·····················································)QDDDDDppp···········)DD" << endl;
	cout << "DDD····································ppppDDDppppp··ppDDDDDDDDDDDDDbp·······)DD" << endl;
	cout << "DDD·······················ppbDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDb·····)DD" << endl;
	cout << "DDD··················pppDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDp···)DD" << endl;
	cout << "DDD············qppDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPPDDDDDDDDpp)DD" << endl;
	cout << "DDD······ppQDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPP·········PPDDP)DD" << endl;
	cout << "DDD··pDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPP···················)DD" << endl;
	cout << "DDDpDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDP·····················)DD" << endl;
	cout << "DDDDDDPPPPPPPPPPPPPPPPDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDPQbpp····················)DD" << endl;
	cout << "DDDDD···················)PPPDDDDDDDDDDDDDDDDPP)···Pbp··PPPPSb················)DD" << endl;
	cout << "DDD·)Dp························QDDDDDDDP·····································)DD" << endl;
	cout << "DDD····PPep·················pQDDDDDDDP·······································)DD" << endl;
	cout << "DDD····················ppDDDDDDDDDDDDC·······································)DD" << endl;
	cout << "DDD··················)QDDDDPPQDDDDP··········································)DD" << endl;
	cout << "DDD··················DDDD····DDDP············································)DD" << endl;
	cout << "DDD················)DDDDP····)DDb············································)DD" << endl;
	cout << "DDD·················QDDDP·····)DDp···········································)DD" << endl;
	cout << "DDD··················DDDDDp···)DDDDpppp······································)DD" << endl;
	cout << "DDD···························DDDDDDDDDPP····································)DD" << endl;
	cout << "DDD··········································································)DD" << endl;
	cout << "DDD··········································································)DD" << endl;
	cout << "DDD····pDDDb···DDb··DDb·pDD·DDDDP···QDbqDDDDPDDPDDP)DDDDp·DDP·pDDDb··DDb·····)DD" << endl;
	cout << "DDD···)DD·)Qp·pDDDb·QDDbDDD·DDbpP···DDP··DDP·DDCQDP)DP·DDPDDPQDP·)Db·DDp·····)DD" << endl;
	cout << "DDD···)DDppDb)DDDDD·QDDDPDD·DDQpp···pDD··DDC·DDpDDP)DbpDD·DDP)DbpDDP)QDD·····)DD" << endl;
	cout << "DDD·····PPPPPPPP·PPSPPSP·PP·PPPPS···PP···PP··PPPPP·PPPPP··PPS·)PPPP··PP······)DD" << endl;
	cout << "DDDu·········································································)DD" << endl;
	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;
	cout << "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD" << endl;
	
	cout << "welcome to my text based game ";


	int room = 1;
	char input;
	int CoinDropper();

	while(1) {
		srand(time(NULL));//seeds rand()

		int Health = 100;//player starting money
		
			cout << "you have " << Health << " hitpoints left" << endl;
			system("pause");// needed to pause the game
			Health += CoinDropper();
		
		switch (room) {

		case 1:

			cout << "your in room one you can go south (s)" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
				break;
		case 2:
			cout << "your in room two you can go north (n) or west (w)" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			if (input == 'w')
				room = 3;
			break;
		case 3:
			cout << "your in room three you can go south (s) or east (e)" << endl;
			cin >> input;
			if (input == 's')
				room = 4;
			if (input == 'e')
				room = 2;
			break;
		}//end switch 
	}//end of game loop
}//end of main

int CoinDropper() {
	int num = rand() % 100 + 1;//geberates a random #b/t 1-100
	if (num <= 30) {
		cout << "you lost 1 hit point" << endl;
		return -1;
	}
	else if (num <= 50) {
		cout << "you lost 5 hit points" << endl;
		return 5;
	}
	else if (num <= 60) {
		cout << "you lost 10 hit points" << endl;
		return -10;
	}
	else if (num <= 65) {
		cout << "you have lost 15 hit points" << endl;
		return -15;
	}
	else if (num <= 100) {
		cout << "you have lost 20 hitpoints " << endl;
		return -20;
	}
}