#include "HTMLParagraphElement.hpp"

HTMLParagraphElement::HTMLParagraphElement()
{
    title = L"p";
}

bool HTMLParagraphElement::is_paragraph_node()
{
    return true;
}
