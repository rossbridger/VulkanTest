#include "vulkanwindow.h"
#include "vulkanrenderer.h"

QVulkanWindowRenderer *VulkanWindow::createRenderer()
{
	return new VulkanRenderer(this);
}
