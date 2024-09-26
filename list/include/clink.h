namespace LIST {
struct NODE {
  NODE(int val = 0) : date(val), next(nullptr){};
  int date;
  NODE* next;
};

class Clink {
 public:
  Clink();
  ~Clink();
  public:
  void InsertTail(int val);

 private:
  NODE* _head;
};
}  // namespace LIST