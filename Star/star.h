class Player;

class Star {
public:
    int width;
    int height;

    Player* player;

    Star();
    ~Star();

    void start();
    void on_started();
    void on_tick();  
    void update_screen();           
};