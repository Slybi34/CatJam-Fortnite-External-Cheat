	//if (menu_key)
	//{

	//	auto& style = ImGui::GetStyle();




	//	style.Colors[ImGuiCol_TitleBg] = ImColor(24, 25, 24, 255);
	//	style.Colors[ImGuiCol_Text] = ImColor(252, 186, 3);

	//	style.Colors[ImGuiCol_TitleBgActive] = ImColor(24, 25, 24, 255);
	//	style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(15, 15, 15, 50);

	//	style.Colors[ImGuiCol_Border] = ImColor(0, 0, 0, 0);
	//	style.Colors[ImGuiCol_WindowBg] = ImColor(12, 12, 12, 255);

	//	style.Colors[ImGuiCol_Button] = ImColor(24, 25, 24, 255);
	//	style.Colors[ImGuiCol_ButtonActive] = ImColor(44, 44, 44, 255);
	//	style.Colors[ImGuiCol_ButtonHovered] = ImColor(44, 44, 44, 255);

	//	style.Colors[ImGuiCol_CheckMark] = ImColor(252, 186, 3);

	//	style.Colors[ImGuiCol_FrameBg] = ImColor(36, 37, 36, 255);
	//	style.Colors[ImGuiCol_FrameBgActive] = ImColor(36, 37, 36, 255);
	//	style.Colors[ImGuiCol_FrameBgHovered] = ImColor(36, 37, 36, 255);

	//	style.Colors[ImGuiCol_Header] = ImColor(54, 56, 54, 255);			// for collapsing headers , etc
	//	style.Colors[ImGuiCol_HeaderActive] = ImColor(54, 56, 54, 255);
	//	style.Colors[ImGuiCol_HeaderHovered] = ImColor(54, 56, 54, 255);

	//	style.Colors[ImGuiCol_ResizeGrip] = ImColor(51, 49, 50, 255);		    // the resize grip thing bottom right
	//	style.Colors[ImGuiCol_ResizeGripActive] = ImColor(54, 53, 55);			// when you hold it / active
	//	style.Colors[ImGuiCol_ResizeGripHovered] = ImColor(51, 49, 50, 255);			// when you hover over it

	//	style.Colors[ImGuiCol_SliderGrab] = ImColor(252, 186, 3);
	//	style.Colors[ImGuiCol_SliderGrabActive] = ImColor(24, 25, 24, 255);
	//	// 54 , 56, 54 , 255
	//	style.Colors[ImGuiCol_Border] = ImColor(54, 54, 54);
	//	style.Colors[ImGuiCol_Separator] = ImColor(54, 54, 54);
	//	style.Colors[ImGuiCol_SeparatorActive] = ImColor(54, 54, 54);
	//	style.Colors[ImGuiCol_SeparatorHovered] = ImColor(54, 54, 54);

	//	static const char* MouseKeys[]{ "Right Mouse","Left Mouse","Control","Shift","Alt","Tab","Mouse3","Mouse4","Z Key","X Key","C Key","V Key" };
	//	static int KeySelected = 0;

	//	if (ImGui::Begin(("				  Bytes.AC"), 0, ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoResize  | ImGuiWindowFlags_NoScrollbar   ))
	//		ImGui::SetNextWindowSize(ImVec2({ 300, 675 }), ImGuiSetCond_FirstUseEver); {			
	//		ImGui::SetWindowSize(ImVec2(315, 600));
	//		ImGui::Checkbox(("Enable Aimbot"), &item.Aimbot);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Memory Aimbot - Lock on"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Spacing();
	//		ImGui::Text((E("Aim Key: ")));
	//		HotkeyButton(hotkeys::aimkey, ChangeKey, keystatus);

	//		ImGui::Text("");
	//		ImGui::Checkbox("Enable Box", &item.Esp_box);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Simple 2D Box, can choose types"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Muzzle"), &item.Locl_line);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("It will make a line to the player"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Skeletons"), &item.skeleton);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Simple Skeleton ESP"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Lines"), &item.Esp_line);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Lines to the enemy's"));
	//			ImGui::EndTooltip();
	//		}

	//		ImGui::Checkbox(("Enable Rainbow "), &item.rainbow_colors);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Rainbow ESP!"));
	//			ImGui::EndTooltip();
	//		}

	//		if (item.Esp_box) {
	//			ImGui::Combo(("Box Type"), &esp_mode, esp_modes, sizeof(esp_modes) / sizeof(*esp_modes));
	//		}

	//		ImGui::Text("");

	//		ImGui::SliderFloat(("FOV"), &item.AimFOV, 20, 500);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Field of view for aimbot"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::SliderFloat(("Smooth X"), &item.Aim_SpeedX, 1, 30);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("X Value of smoothing"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::SliderFloat(("Smooth Y"), &item.Aim_SpeedY, 1, 30);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Y Value of smoothing"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Spacing();
	//		ImGui::Checkbox(("Enable PlayerFly"), &item.playerfly);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Spam jump to fly!"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Insta-Res"), &item.instant_res);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Hold E!"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Ads-Air"), &item.aiminair);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Aim in why jumping!"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::Checkbox(("Enable Rapid-Fire"), &item.Rapidfire);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("Shoots fast!"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::SliderFloat(("Rapid Fire Value"), &item.RapidFireValue, 1, 360);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("How fast you shoot!"));
	//			ImGui::EndTooltip();
	//		}
	//		ImGui::SliderFloat("Res Speed", &item.InstantReviveValue, 0, 10);
	//		ImGui::SameLine();
	//		ImGui::TextColored(ImColor(255, 255, 255, 255), ("[?]"));
	//		if (ImGui::IsItemHovered()) {
	//			ImGui::BeginTooltip();
	//			ImGui::Text(("How fast you res!"));
	//			ImGui::EndTooltip();
	//		}



	//	}

	//	ImGui::End();
	//	ImGui::EndFrame();

	//	ImGui::GetIO().MouseDrawCursor = 1;
	//}
