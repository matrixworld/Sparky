#pragma once

#include "sp/sp.h"
#include "sp/Common.h"

#include "sp/graphics/API/Framebuffer.h"
#include "sp/graphics/API/VertexArray.h"
#include "sp/graphics/API/IndexBuffer.h"
#include "PostEffectsPass.h"

namespace sp { namespace graphics {

	// The Post Effects pipeline
	class SP_API PostEffects
	{
	private:
		std::vector<PostEffectsPass*> m_Passes;
	public:
		PostEffects();
		~PostEffects();
		void Push(PostEffectsPass* pass);
		void Pop();

		void RenderPostEffects(Framebuffer* source, Framebuffer* target, API::VertexArray* quad, API::IndexBuffer* indices);
	};

} }