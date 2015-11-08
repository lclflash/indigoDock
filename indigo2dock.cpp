#include "indigo2dock.h"

Indigo2Dock::Indigo2Dock(QWidget *parent) : QWidget(parent)
{
    init();

}

void Indigo2Dock::init(){

    // Setup Tabbar
    indigoTab = new Indigo2Tabbar;
    indigoTab->setTabPosition(Indigo2Tabbar::East);
    indigoTab->setMovable(true);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->setSpacing(0);
    layout->setMargin(0);
    setLayout(layout);


    layout->addWidget(indigoTab);

    // Demo Tabs
    addTab(QIcon(":/icons/icons/placeholder.png"));
    addTab(QIcon(":/icons/icons/placeholder.png"));
    addTab(QIcon(":/icons/icons/placeholder.png"));

}

void Indigo2Dock::addTab(QIcon icon){
    Indigo2DropZone * dropzone = new Indigo2DropZone(0);
    indigoTab->addTab(dropzone, icon, "");

}
