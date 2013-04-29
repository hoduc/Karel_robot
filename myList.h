typedef struct position{
  int x,y;
}Point;

typedef struct pointNode{
  Point p;
  struct pointNode *next;
  pointNode(int x, int y):next(NULL){p.x = x, p.y = y;}
}pn;

typedef class PointClass{
private:
  pn *head, *last;
  int len;
public:
  PointClass():len(0),head(NULL),last(NULL){}
  void add(int x, int y){
    if (len < 1){
      head = new pn(x,y);
      last = head;
    }
    else{
      last->next = new pn(x,y);
      last = last->next;
    }
    len++;
  }
  
  pn* removeNode(int x, int y){
    pn *t = head;
    pn *pred = NULL;
    while (t != NULL){
      if (t->p.x == x && t->p.y == y){
	std::cout << "Removing nodes:[" << t->p.x << "," << t->p.y << "]" << std::endl;
	break;
      }
      pred = t;
      t = t->next;
    }
    if (t != NULL){
      //removing head
      if (pred == NULL){
	head = head->next;
	t->next = NULL;
	return t;
      }
	
      else{
	pred->next = t->next;
	t->next = NULL;
	return t;
      }
      len--;
    }
    return t;
  }
  
  void delNodes(){
    while (head != NULL){
      pn* t = head;
      head = head->next;
      t->next = NULL;
      delete t;
      t = NULL;
      len--;
    }  
  }
  
  void print(){
    pn* t = head;
    while (t != NULL){
      std::cout << "[" << t->p.x << "," << t->p.y << "]";
      t = t->next;
    }
    std::cout << std::endl;
  }
  ~PointClass(){
    if (head != NULL){
      delNodes();
    }
    
  }
  
}PC;