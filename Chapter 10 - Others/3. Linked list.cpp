struct node
{
	int data;
	node *next;  //pointer for the next node
};

//now we need a class to handle nodes.
//this class should have 2 important pointers, i.e. head and tail.
//the constructer will make head and tail NULL to avoid any garbage value.
class List
{
private:
	node * head, *tail;

public:
	list()
	{
		head = nullptr;
		tail = nullptr;
	}

	void createNode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			temp = nullptr;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void display()
	{
		node *temp = new node;
		temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void insert_start(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insert_end(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = nullptr;

		tail->next = temp;
		tail = temp;
	}

	void insert_position(int pos, int value)
	{
		node *pre = new node;
		node *cur = new node;
		node *temp = new node;
		
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}

	void delete_first()
	{
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}

	void delete_last()
	{
		node *cur = new node;
		node *pre = new node;
		cur = head;
		while (current->next != nullptr)
		{
			pre = cur;
			cur = cur->next;
		}
		tail = pre;
		pre->next = nullptr;
		delete cur;
	}

	void delete_position(int pos)
	{
		node *cur = new node;
		node *pre = new node;
		cur = head;
		for (int i = 1; i < pos)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = cur->next;
	}
};