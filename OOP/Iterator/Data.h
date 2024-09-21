class Data {
  public:
    Data(int a = 0) : data_m(a) {};

    void set_data(int a)
    {
      data_m = a;
    };

    int data()
    {
      return data_m;
    };

  private:
    int data_m;

};
