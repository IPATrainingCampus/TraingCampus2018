template<typename Data>
class ConcurrentQueue
{
    // Please add your own private members
//private:

public:
    // push one element into the queue tail
    void Push(Data const& data);

    // judge whether the queue is empty
    bool Empty() const;

    // try to pop one element
    // if the queue is empty, return false; 
    // otherwise return true and pop the front element to the output paramenter
    bool TryPop(Data& popped_value);

    // wait for the queue to pop one element
    // if the queue is empty, wait till one element is pushed into the queue; 
    // if the queue is not empty, pop the front element to the ouput parameter
    void WaitAndPop(Data& popped_value);
};
