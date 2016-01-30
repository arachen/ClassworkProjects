// Name: Stephanie A****g
// Date: 9/30/15
// Class: Data Structures
// Assignment: Program 3: Sequence
//

#include <iostream>
#include "sequence.h"
namespace NSU_DATA_STRUCTURES
{
    // CONSTRUCTOR
    sequence::sequence( )
    {
        used = 0;
        current_index = 0;
    }

    // DEBUGGING HELP
    void sequence::showIt() const
    {
        std::cout << std::endl << std::endl;
        std::cout << "Sequence is \n ";
        for (size_type i = 0; i < size(); i++)
        {
            std::cout << data[i] << ", ";
        }
        std::cout << "\n end of sequence \n\n";
    }

    // MEMBER FUNCTIONS
    void sequence::start( )
    {
        if (used > 0)
        {
            current_index = 0;
        }
    }

    void sequence::advance( )
    {
        current_index++;
    }

    void sequence::insert(const value_type& entry)
    {
        if(!is_item())
        {
            current_index = 0;
        }

        for (size_type i = used; i > current_index; i--)
        {
            data[i] = data[i - 1];
        }

        data[current_index] = entry;
        used++;

        showIt();
    }

    void sequence::attach(const value_type& entry)
    {
        if(!is_item())
        {
            current_index = used - 1;
        }

        current_index++;

        for (size_type i = used; i > current_index + 1; i--)
        {
            data[i] = data[i - 1];
        }

        data[current_index] = entry;
        used++;

        showIt();
    }

    void sequence::remove_current( )
    {
        for (size_type i = current_index; i < used - 1; i ++)
        {
            data[i] = data[i + 1];
        }

        used--;

        showIt();
    }

    //CONSTANT MEMBER FUNCTIONS
    sequence::size_type sequence::size( ) const
    {
        return used;
    }

    bool sequence::is_item( ) const
    {
        return (current_index != used);
    }

    sequence::value_type sequence::current( ) const
    {
        return data[current_index];
    }
}
