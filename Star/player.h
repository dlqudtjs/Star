class Player {
public:
	int x;
	int y;

	Player();
	~Player();

    void on_started();
    void on_tick();
    void draw();
};