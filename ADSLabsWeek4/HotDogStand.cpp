class HotDogStand
{
public:
	HotDogStand();
	~HotDogStand();
	void justSold();
	int numberSold();
	static int totalSold();
private:
	int id;
	int hotDogsSold;
	static int totalHotDogsSold;
};

HotDogStand::HotDogStand()
{
}

HotDogStand::~HotDogStand()
{
}

void HotDogStand::justSold(){
	hotDogsSold++;
}

int HotDogStand::numberSold(){
	totalHotDogsSold += hotDogsSold;
	return hotDogsSold;
}

int HotDogStand::totalSold(){
	return totalHotDogsSold;
}