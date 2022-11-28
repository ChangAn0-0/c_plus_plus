#ifndef TV_H_
#define TV_H_

class Tv
{
public:
	friend class Remote;
	enum{Off,On};
	enum{MinVal,MaxVal=20};
	enum{Antenna,Cable};
	enum{TV,DVD};

	Tv(int s=Off,int mc=125):state(s),volume(5),maxchannel(mc),channel(2),mode(Caable),input(TV){} 
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return == On; }
	bool voiup
};
#endif // !TV_H_

