#shader vertex
#version 330 core

layout(location = 0) in vec4 position;
layout(location = 1) in vec2 texCoord;

out vec2 v_TexCoord;

void main()
{
	gl_Position = position;
	v_TexCoord = texCoord;
};

#shader fragment
#version 330 core

layout(location = 0) out vec4 color;

in vec2 v_TexCoord;

uniform vec4 u_Color;
uniform sampler2D u_Texture;

void main()
{
	//vec4 texColor = texture(u_Texture, v_TexCoord);
	//if (texColor == vec4(0.0f, 0.0f, 0.0f, 0.0f))
	//	color = u_Color;
	//else
	//	color = texColor;
	vec4 texColor = texture(u_Texture, v_TexCoord);
	bvec4 test = lessThanEqual(texColor, vec4(0.0f, 0.0f, 0.0f, 0.008f));

	if (test[0] && test[1] && test[2] && test[3])
		color = u_Color;
	else
		color = texColor;
};