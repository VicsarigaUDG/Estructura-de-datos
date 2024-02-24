#include <iostream>
using namespace std;
class Vertex {
public:
  float value;
  Vertex *next;
  Vertex() { next = nullptr; }
};
class Pilas {
public:
  Pilas();
  // void append(float value);
  // void insertAt(int pos, float value);
  void push(float value);
  void pop();
  // void removeAt(int pos);
  // void removeLast();
  // void removeAtValue(float value);
  void peek();

  void print();

private:
  Vertex *head, *tail;
};

Pilas::Pilas() {
  head = nullptr;
  tail = nullptr;
}

void Pilas::push(float value) {
  Vertex *vtx = new Vertex();
  vtx->value = value;
  if (head != nullptr)
    vtx->next = head;
  else
    tail = vtx;
  head = vtx;
}

/*void Pilas::append(int value) {
  Vertex *v = new Vertex();
  v->value = value;
  if (tail != nullptr) {
    tail->next = v;
  } else {
    tail = v;
    head = v;
  }
}

void Pilas::insertAt(int pos, int value) {
  Vertex *vtx = new Vertex();
  vtx->value = value;
  pos = pos - 1;

  if (pos == 0) {
    push(value);
  } else {
    Vertex *prev = head;
    for (int i = 1; i < pos && prev != nullptr; i++) {
      prev = prev->next;
    }

    if (prev == nullptr) {
      cout << "Eso no se puede D:< (Porque lo quieres tronar?)\n\n";
      return;
    }
    vtx->next = prev->next;
    prev->next = vtx;

    if (prev == tail) {
      tail = vtx;
    }
  }
}
*/
void Pilas::pop() {
  Vertex *temp = head;
  if (head == nullptr) {
    cout << "La lista esta vacia\n";
  } else {
    head = head->next;
    delete temp;
  }
}

/*
void Pilas::removeAt(int pos) {
  if (head == nullptr) {
    cout << "La lista esta vacia\n\n";
  } else {
    if (pos == 0) {
      pop();
    }
    if (pos < 0) {
      cout << "No se puede eliminar esa posicion\n\n";
    } else {
      Vertex *pre = head;
      for (int i = 0; i < pos - 1; i++) {

        if (pre->next == nullptr) {
          cout << "La posicion no existe\n\n";
          return;
        }
        pre = pre->next;
      }
      Vertex *del = pre->next;
      pre->next = del->next;
      delete del;
      if (pre->next == nullptr) {
        tail = pre;
      }
    }
  }
}

void Pilas::removeAtValue(int value) {
  if (head == nullptr) {
    cout << "La lista esta vacia\n\n";
  } else if (head->value == value) {
    pop();
  } else {
    Vertex *pre = head;
    while (pre->next != nullptr && pre->next->value != value) {
      pre = pre->next;
    }
    if (pre->next == nullptr) {
      cout << "El valor no existe en la lista\n\n";
    } else {
      Vertex *del = pre->next;
      pre->next = del->next;
      delete del;
      if (pre->next == nullptr) {
        tail = pre;
      }
    }
  }
}

void Pilas::removeLast() {
  if (head == nullptr) {
    cout << "La lista esta vacia\n\n";
  } else if (head == tail) {
    delete head;
    head = nullptr;
    tail = nullptr;
  } else {
    Vertex *pre = head;
    while (pre->next->next != nullptr) {
      pre = pre->next;
    }
    delete pre->next;
    pre->next = nullptr;
    tail = pre;
  }
}
*/
void Pilas::print() {
  Vertex *v = head;
  while (v != nullptr) {
    cout << v->value << "->";
    v = v->next;
  }
}

void Pilas::peek() {
  Vertex *temp = head;
  if (head == nullptr) {
    cout << "La lista esta vacia\n";
  } else {
    head = head->next;
    cout << temp->value << "\n\n";
  }
}

int main() {

  Pilas pila1;
  // lista.append(0);
  // lista.insertFirst(5);
  // lista.insertFirst(6);
  // lista.insertAt(1, 9);
  // lista.insertFirst(7);
  // lista.append(2);
  // lista.insertAt(8, 2);
  pila1.push(5);
  pila1.push(10);
  pila1.push(15.5);
  pila1.push(20);
  pila1.print();
  cout << "\n\n";
  pila1.pop();
  pila1.push(11);
  pila1.print();
  cout << "\n\n";
  pila1.peek();
  // lista.removeAt(-1);
  // lista.removeLast();
  // lista.removeFirst();
  // lista.removeAtValue(-2);
  // lista.print();
  pila1.peek();
}