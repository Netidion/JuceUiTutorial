/*
  ==============================================================================

    TextComponent.cpp
    Created: 29 Dec 2022 12:39:40pm
    Author:  Neti

  ==============================================================================
*/

#include <JuceHeader.h>
#include "TextComponent.h"
using namespace juce;

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (Graphics& g)
{
    Font theFont("Calibri", "Bold", 20);
    g.setFont(theFont);
    g.drawText("Neti's Plug-in", 10, 10, 400, 60, Justification::topLeft);
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
