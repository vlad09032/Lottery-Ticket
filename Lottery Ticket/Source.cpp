/*
Time to win the lottery!

Given a lottery ticket (ticket), represented by an array of 2-value arrays, you must find out
if you've won the jackpot.

Example ticket:

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }
To do this, you must first count the 'mini-wins' on your ticket. Each subarray has both a
string and a number within it. If the character code of any of the characters in the string
matches the number, you get a mini win. Note you can only have one mini win per sub array.

Once you have counted all of your mini wins, compare that number to the other input provided
(win). If your total is more than or equal to (win), return 'Winner!'. Else return 'Loser!'.

All inputs will be in the correct format. Strings on tickets are not always the same length.

*/
#include<iostream>
#include<string>
#include<vector>


std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
	int shet{ 0 };
	for (int i{ 0 }; i < ticket.size(); ++i)
	{
		for (int j{ 0 }; j < ticket[i].first.length(); ++j)
		{
			if (static_cast<int>(ticket[i].first[j]) == ticket[i].second)
			{
				++shet;
				break;
			}
		}
		
	}
	if (shet >= win)
		return "Winner!";
	else
		return "Loser!";
	 
}

int main()
{
	typedef std::pair<std::string, int> p;
	//std::cout<<bingo({ p("ABC", 65), p("HGR", 74), p("BYHT", 74) }, 2);
	std::cout << bingo({p("SAUTKF", 76), p("FX", 69), p("OEMVR", 69), p("KBUZHG", 74), p("ADQBW", 84), p("OW", 72)}, 2)<<std::endl;
	std::cout << bingo({ p("JEOQQ", 80), p("HMSAMKF", 67), p("FDG", 74), p("UDYM", 66), p("QR", 84), p("WRUNGOD", 86) }, 1) << std::endl;
	std::cout << bingo({ p("MXBTS", 68), p("QSZE", 78), p("POJATU", 72), p("XVRZ", 83), p("ZZUDQYTG", 77), p("HRKSNCXH", 84), p("XJHE", 65)}, 2) << std::endl;
	std::cout << bingo({ p("GUKWL", 80), p("SSDUMNG", 77), p("VPVYHQGL", 82), p("FHVISICE", 73) }, 1) << std::endl;
	std::cout << bingo({ p("UIK", 71), p("RS", 66), p("GPOV", 83), p("DR", 82), p("JOEUMMY", 85), p("UDYM", 66), p("PKKX", 79), p("RUIOJBEI", 72), p("ZVGKQAPY", 79), p("JACZ", 88) }, 2) << std::endl;
	std::cout << bingo({ p("HIBXXHJG", 65), p("ZU", 75), p("BLGOXISA", 90), p("KCNJGU", 71), p("HVPBJTCT", 81), p("GCNMDDH", 77), p("FIJCQ", 82), p("ES", 88), p("SCAZR", 81) }, 1) << std::endl;
}