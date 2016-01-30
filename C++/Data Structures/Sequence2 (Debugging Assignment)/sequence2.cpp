#include <iostream>
#include <cassert>
#include <algorithm>
#include "sequence2.h"

namespace NSU_DATA_STRUCTURES
{
    sequence::sequence(size_type initial_capacity)
    {
        capacity = initial_capacity;
        // ***************************************
        // CHANGED capacity = DEFAULT_CAPACITY TO
        //         capacity = initial_capacity
        // ***************************************
        data = new value_type[capacity];
        used = 0;
    }

    sequence::sequence(const sequence& source)
    {
        capacity = source.capacity;
        std::cout << " capacity is " << capacity << std::endl;
        data = new value_type[capacity];
        used = source.used;
        std::copy(source.data, source.data + used, data);

//      for (size_type i = 0; i < size(); i++)
//          data[i] = source.data[i];
        current_index = source.current_index;
    }

    void sequence::operator =(const sequence& source)
    {
        if (this == &source)
            return;
        delete[] data;
        this->capacity = source.capacity;
        data = new value_type[capacity];
        used = source.used;
        for (size_type i = 0; i < size(); i++)
            data[i] = source.data[i];
        current_index = source.current_index;

    }


    sequence::~sequence()
    {
        delete[] data;
    }

    void sequence::resize(size_type new_capacity)
    {
        if (new_capacity > used)
        // ****************************************
        // CHANGED if(new_capacity > capacity) TO
        //         if(new_capacity > used)
        // ****************************************
        {
            capacity = new_capacity;
            value_type* temp = new value_type[capacity];
            // ********************************************************
            // CHANGED value_type* temp = new value_type(capacity) TO
            //         value_type* temp = new value_type[capacity]
            // ********************************************************

            std::cout << "********************* RESIZE *****************************" << std::endl;

            std::cout << "temp is " << temp << " data is " << data << std::endl;
            std::cout << "size() is " << size() << " used is " << used << std::endl;

            std::copy(data, data + used, temp);

//          for (size_type i = 0; i < size(); i++)
//          {
//              temp[i] = data[i];
//              std::cout << temp[i] << "  " << data[i] << std::endl;
//          }
            delete[] data;
//          data = new value_type[capacity];

            data = temp;
            std::cout << "resized to " << capacity  << std::endl;
            std::cout << "temp is " << temp << " data is " << data << std::endl;
            std::cout << "size() is " << size() << " used is " << used << std::endl;
            std::cout << "********************* RESIZE *****************************" << std::endl;
        }
        else
        {
            std::cout << "did not resize " << std::endl;
        }
        showIt();
    }

    void sequence::start()
    {
        current_index = 0;
    }

    void sequence::advance()
    {
        current_index++;
    }

    void sequence::insert(const value_type& entry)
    {
        std::cout << "insert " << entry << std::endl;
        if (!is_item())
        {
            current_index = 0;
        }

        for (size_type i = used; i > current_index; --i)
            data[i] = data[i - 1];

        data[current_index] = entry;
        used++;

        showIt();
    }

    void sequence::showIt() const
    {
        std::cout << std::endl << std::endl;
        std::cout << "size() is " << size() << "Sequence is \n ";
        for (size_type i = 0; i < size(); i++)
            std::cout << data[i] /*<< std::endl*/ << ", ";
        std::cout << "\n end of sequence\n\n";
    }

    void sequence::attach(const value_type& entry)
    {
        std::cout << " attach " << entry << std::endl;
        if (is_item())
        {
            std::cout << "Is an item " << current() << std::endl;
            for (size_type i = used; i > current_index; --i)
            // ****************************************************************
            // CHANGED for(size_type i = used; i > current_index + 1; --i) TO
            //         for(size_type i = used; i > current_index; --i)
            // ****************************************************************
            {
                std::cout << data[i] << "  " << data[i - 1] << std::endl;
                data[i] = data[i - 1];
                std::cout << data[i] << "  " << data[i - 1] << std::endl;
            }
            current_index++;
            std::cout << "current_index is " << current_index << std::endl;
        }
        else
        {
            std::cout << "NOT an item " << std::endl;
            current_index = size();
            std::cout << "current_index is " << current_index << std::endl;
        }

        std::cout << "entry is " << entry << std::endl;
        std::cout << "data["<<current_index<<"] is " <<  (data[current_index] = entry) << std::endl;
        data[current_index] = entry;
        std::cout << " attached " << data[current_index] << std::endl;
        used++;

        showIt();
    }

    void sequence::remove_current()
    {
        //      assert(size() < CAPACITY);

        if (is_item())
        {
            for (size_type i = current_index + 1; i < used; i++)
                data[i - 1] = data[i];
        }
        used--;
        //showIt();
    }

    sequence::size_type sequence::size() const
    {
        return used;
    }

    bool sequence::is_item() const
    {
        return current_index < size();
    }

    sequence::value_type sequence::current() const
    {
        return data[current_index];
    }


}
