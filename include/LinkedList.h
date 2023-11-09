#include <string>
#include <memory>

namespace swarnendu
{
    struct Node
    {
        std::string m_data;
        Node* m_pNext = nullptr;
        
        Node() = default;
        Node(const std::string& data)
            : m_data(data)
            , m_pNext(nullptr)
        {}
        Node(const Node& rhs) = delete;
        Node& operator=(const Node& rhs) = delete;
        Node(Node&& rhs) = delete;
        Node& operator=(Node&& rhs) = delete;
        ~Node()
        {
            if (!m_data.empty())
                m_data.clear();

            if (m_pNext)
                delete m_pNext;

            m_pNext = nullptr;
        }
    };

    class LinkedList
    {
        private:

    };
} //namespace swarnendu