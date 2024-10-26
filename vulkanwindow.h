#ifndef VULKANWINDOW_H
#define VULKANWINDOW_H

#include <QVulkanWindow>

class VulkanWindow : public QVulkanWindow
{
public:
	QVulkanWindowRenderer *createRenderer() override;
};
#endif // VULKANWINDOW_H
